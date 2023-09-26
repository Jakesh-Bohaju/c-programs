/*
Program for Bisection Method to find root

Author : Jakesh Bohaju


For more visit : https://github.com/Jakesh-Bohaju/c-programs.git
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define f(x) x *x - 4 * x - 10
#define e 0.0001
void main()
{
    float x0, x1, x2, f0, f1, f2, root;
    int i = 1;
    system("cls");
    printf("Using Bisection Method to find root of equation X^2-4x-10\n");
    printf("Enter value for x1 and x2\n");
    a:
    printf("x1: ");
    scanf("%f", &x1);
    printf("x2: ");
    scanf("%f", &x2);
    f1 = f(x1);
    f2 = f(x2);
    if ((f1 * f2) > 0)
    {
        printf("Enter another gueses\n");
        goto a;
    }
    else
    {
        printf("\t\tx0\tf0\tx1\tf1\tx2\tf2\n");

    b:
        x0 = (x1 + x2) / 2;
        f0 = f(x0);
        printf("\nItteration: %d\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f", i, x0, f0, x1, f1, x2, f2);
    }
    if ((f1 * f0) < 0)
    {
        x2 = x0;
        f2 = f0;
    }
    else
    {
        x1 = x0;
        f1 = f0;
    }
    if (fabs((x2 - x1) / x2) <= e)
    {
        root = (x1 + x2) / 2;
        printf("\nThe root is %.4f", root);
        goto c;
    }
    else
    {
        i++;
        goto b;
    }
    c:

    getch();

    system("pause");
}
