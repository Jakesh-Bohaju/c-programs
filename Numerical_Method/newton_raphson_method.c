/*
Program for Newton Raphson Method

Author : Jakesh Bohaju

Algorithm
1) First you have to define equation f(x) and its first derivative g(x) or f'(x).
2) Guess the initial value of xo, here the guess is as your wish.
3) Then find f(xo) and g(xo).
4) Calculate x1=xo-f(xo)/g(xo)
5) Check if (x1-xo)/x1 is greater or equal to e. Here  e is error criterian i.e 0.0001 on the program
6) print root
7) else, xo=x1 and goto step 3.
8) exit

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define f(x) x *x - 4 * x - 10
#define g(x) 2 * x - 4
#define e 0.0001
void main()
{
    float x0, x1, f0, g0, root;
    int i = 1;
    system("cls");
    printf("Using Newton Raphson method to find root of equation x^2-4x-10=0\n");
    printf("Enter values of x0\n");
a:
    printf("x0: ");
    scanf("%f", &x0);
    printf("steps\tx0\tx1\tf0\tg0\n");
b:
    f0 = f(x0);
    g0 = g(x0);
    x1 = x0 - (f0 / g0);
    printf("%d\t%.4f\t%.4f\t%.4f\t%.4f\n", i, x0, x1, f0, g0);
    i++;
    if (fabs((x1 - x0) / x1) <= e)
    {
        root = x1;
        printf("The root is %.4f", root);
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
