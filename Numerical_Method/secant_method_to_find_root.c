/*
Program to find root of x^3 - 2x -5 = 0 using secant method

Author : Jakesh Bohaju

Algorithm
1) initialize two guesses x1 and x2
2) set f1=f(x1) and f2=f(x2)
3) compute, x3=((x1*f2)-(x2*f1))/(f2-f1) and set f3=f(x3)
4) if ((x3-x2)/x3)<=e, print root
5) else, set x1=x2, f1=f2, x2=x3, f2=f3 and goto step 3
6) exit


Note : If want to change equation then change it at 
#define f(x) x *x *x - 2 * x - 5

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git
*/

#include <conio.h>
#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#define f(x) x *x *x - 2 * x - 5
#define e 0.0001
void main()
{
    float x1, x2, x3, f1, f2, f3, root;
    int i = 1;
    system("cls");
    printf("Secant Method to find root of x^3-2x-5=0\n");
    printf("Enter initial guesses\n");
    printf("x1: ");
    scanf("%f", &x1);
    printf("x2: ");
    scanf("%f", &x2);
    f1 = f(x1);
    f2 = f(x2);
    printf("steps\tx1\tf(x1)\tx2\tf(x2)\tx3\tf(x3)\n");
    b:x3 = ((x1 * f2) - (x2 * f1)) / (f2 - f1);
    f3 = f(x3);
    printf("%d\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\n", i, x1, f1, x2, f2, x3, f3);
    i++;
    if (fabs((x3 - x2) / x3) <= e)
    {
        root = x3;
        printf("The root is %.4f", root);
        goto c;
    }
    else
    {
        x1 = x2;
        f1 = f2;
        x2 = x3;
        f2 = f3;
        goto b;
    }
    c:
    getch();

    system("pause");

}
