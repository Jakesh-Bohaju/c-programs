/*
Program for Lagrange's Interpolation

Author : Jakesh Bohaju


For more visit : https://github.com/Jakesh-Bohaju/c-programs.git
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define f(x, y) (y - x) / (y + x)

void main()
{
    float x[10], y[10], n, p = 0, num, den, a;
    int i, j;
    system("cls");
    printf("Lagrange's Interpolation\n");
    printf("Enter value to find root\n");
    scanf("%f", &a);
    printf("Enter value of n\n");
    scanf("%f", &n);
    printf("Enter values for x and y\n");
    for (i = 0; i < n; i++)
        scanf("%f%f", &x[i], &y[i]);
    for (i = 0; i < n; i++)
    {
        num = 1;
        den = 1;
        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                num = num * (a - x[j]);
                den = den * (x[i] - x[j]);
            }
        }
        p = p + y[i] * num / den;
    }
    printf("Root= %f", p);
    getch();

    system("pause");
}
