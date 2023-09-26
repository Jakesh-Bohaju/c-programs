/*
Program for Curve Fitting

Author : Jakesh Bohaju

In this program we are going to find out the value of 'a' and 'b' of y=a+bx and value of x and y is input by the user. This program is only for three case of curve fitting
i. Straight Line
ii. Power Form
iii. Exponential Form

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float a, b, x[10], y[10], sumx = 0, sumy = 0, sumxy = 0, sumxx = 0;
    float Y[10], X[10], A;
    int i, n, choice;
    system("cls");
    printf("Enter nth term\n");
    scanf("%d", &n);
    printf("Enter value of x and y\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f%f", &x[i], &y[i]);
    }
j:
    printf("Fit the curve of the form\n1.y=a+bx\n2.y=ax^b\n3.y=aexp(bx)\n4.Exit\n");
    printf("Enter choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("y=a+bx\n");
        for (i = 0; i < n; i++)
        {
            sumx = sumx + x[i];
            sumy = sumy + y[i];
            sumxy = sumxy + x[i] * y[i];
            sumxx = sumxx + x[i] * x[i];
        }
        printf("sumx=%f\nsumy=%f\nsumxy=%f\nsumxx=%f\n", sumx, sumy, sumxy, sumxx);
        b = (n * sumxy - sumx * sumy) / (n * sumxx - sumx * sumx);
        a = (sumy - b * sumx) / n;
        printf("a=%f\tb=%f\n", a, b);
        break;

    case 2:
        printf("y=ax^b\n");
        for (i = 0; i < n; i++)
        {
            X[i] = log(x[i]);
            Y[i] = log(y[i]);
        }
        for (i = 0; i < n; i++)
        {
            sumx = sumx + X[i];
            sumy = sumy + Y[i];
            sumxy = sumxy + X[i] * Y[i];
            sumxx = sumxx + X[i] * X[i];
        }
        printf("sumx=%f\nsumy=%f\nsumxy=%f\nsumxx=%f\n", sumx, sumy, sumxy, sumxx);
        b = (n * sumxy - sumx * sumy) / (n * sumxx - sumx * sumx);
        A = (sumy - b * sumx) / n;
        a = exp(A);
        printf("a=%f\tb=%f\n", a, b);
        break;

    case 3:
        printf("y=aexp(bx)\n");
        for (i = 0; i < n; i++)
        {
            Y[i] = log(y[i]);
        }
        for (i = 0; i < n; i++)
        {
            sumx = sumx + x[i];
            sumy = sumy + Y[i];
            sumxy = sumxy + x[i] * Y[i];
            sumxx = sumxx + x[i] * x[i];
        }
        printf("sumx=%f\nsumy=%f\nsumxy=%f\nsumxx=%f\n", sumx, sumy, sumxy, sumxx);
        b = (n * sumxy - sumx * sumy) / (n * sumxx - sumx * sumx);
        A = (sumy - b * sumx) / n;
        a = exp(A);
        printf("a=%f\tb=%f\n", a, b);
        break;

    case 4:
        exit(0);

    default:
        printf("Enter correct choice\n");
    }
    goto j;
    getch();

    system("pause");
}
