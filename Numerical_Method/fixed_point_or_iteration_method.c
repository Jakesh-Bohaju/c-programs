/*
Program for Fixed Point or Iteration Method

Author : Jakesh Bohaju


For more visit : https://github.com/Jakesh-Bohaju/c-programs.git
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define f(x) ((5 / x) + x) / 2
#define e 0.0001
void main()
{
    float x0, x1, f1;
    int i = 1;
    system("cls");
    printf("Using Fixed Point Method / Iterative Method to find root of x^2-5=0\n");
    printf("Enter value for x0\n");
    printf("x0: ");
    scanf("%f", &x0);
    printf("steps\tx0\tx1\n");
b:
    x1 = f(x0);
    printf("%d\t%.4f\t%.4f\n", i, x0, x1);
    i++;
    if (fabs((x1 - x0) / x1) <= e)
    {
        printf("The root is %.4f", x1);
        goto c;
    }
    else
    {
        x0 = x1;
        goto b;
    }
c:
    getch();

    system("pause");
}
