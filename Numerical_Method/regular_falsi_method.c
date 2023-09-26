/*
Program for Regular Falsi Method

Author : Jakesh Bohaju

Algorithm
1) Enter two guesses value i.e x1 and x2. [note: guesses must selected in such a way that root of the equation is in between guesses otherwise program display message to enter guess again]
2) Find f1=f(x1) anf f2=f(x2)
3) if f1f2>0 stop the program
4) else, find x0=x1-(f(x1)f(x2))/(f(x2)-f(x1)) and f0=f(x0)
5) if f1f0<0, x2=x0 and f2=f0
6) else, x1=x0 and f1=f0
7) if modulus of (x2-x1)/x2 is less or equal to error criterian i.e e, then print root and stop
8) else, goto step 4.
9) Exit


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
