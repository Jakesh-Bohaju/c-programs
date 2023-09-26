/*
Program for Euler's Method

Author : Jakesh Bohaju


For more visit : https://github.com/Jakesh-Bohaju/c-programs.git
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define f(x, y) (y - x) / (y + x)

void main()
{
    float x, y, h, xn, l;
    system("cls");
    printf("Program for Solution of Ordinary Differential Equation\nEuler's Method\n");
    printf("Enter value for x and y\n");
    scanf("%f%f", &x, &y);
    printf("Enter value for h and last of x\n");
    scanf("%f%f", &h, &xn);
    while (x + h <= xn)
    {
        l = h * f(x, y);
        y = y + l;
        x = x + h;

        printf("y = %f\tx = %f\n", y, x);
    }
    getch();

    system("pause");
}
