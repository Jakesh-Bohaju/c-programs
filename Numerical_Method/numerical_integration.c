/*
Program for Numerical Integration (Trapezoidal Rule, Simpson's Rule and Boole's Rule)

Author : Jakesh Bohaju


This program is for numerical integration of numerical methods
Here we are going to solve the integration of defined function f(x)
Using...
1. Trapezoidal Rule
2. Composite Trapezoidal Rule
3. Simpson's 1/3 Rule
4. Composite Simpson's 1/3 Rule
5. Simpson's 3/8 Rule
6. Boole's Rule

In this program we are going to solve for integration of square root of sin(x)
and get output when lower limit is 0 and upper limit is pie/2.
Note: You can change the integration function f(x) and also can change the lower and upper limit for solution..

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>         //for mathematical operation like sqrt
#define f(x) sqrt(sin(x)) // defined the function i.e of which integration is going to calculate
void main()
{
    int i, choice;
    float n, a, b, h, it, ict, is1, ics1, is2, ib, sum, sum1;
    system("cls");
    printf("Solution for integration of sqrt(sin(x)) \n");
    printf("Enter lower limit and upper limit\n"); // lower and upper value of integral
    scanf("%f%f", &a, &b);
    printf("Select Options\n1.Trapezoidal Rule\n2.Composite Trapezoidal Rule\n3.Simpson's 1/3 Rule\n4.Composite Simpson's 1/3 Rule\n5.Simpson's 3/8 Rule\n6.Boole's Rule\n7.Exit\n");
a:
    printf("\nEnter Choice : ");
    scanf("%d", &choice);
    switch (choice)
    {

    /// Solution for Trapezoidal Rule i.e It
    case 1:
        h = b - a;
        it = ((f(a) + f(b)) / 2) * h;
        printf("It = %.4f\n", it);
        break;

    /// Solution for Composite Trapezoidal Rule i.e Ict
    case 2:
        printf("Enter value for n : ");
        scanf("%f", &n);
        h = (b - a) / n;
        sum = 0;
        for (i = 1; i < n; i++)
        {
            sum = sum + f(a + i * h);
        }
        ict = (h / 2) * (f(a) + f(b) + 2 * sum);
        printf("Ict = %.4f\n", ict);
        break;

    /// Solution for Simpson's Rule / Simpson's 1/3 Rule i.e Is1
    case 3:
        h = (b - a) / 2;
        is1 = (h / 3) * (f(a) + f(b) + 4 * f(a + h));
        printf("Is1 = %.4f\n", is1);
        break;

    /// Solution for Composite Simpson's Rule i.e Ics1
    case 4:
        printf("Enter value for n : ");
        scanf("%f", &n);
        h = (b - a) / n;
        sum = 0;
        sum1 = 0;
        for (i = 1; i < n; i++)
        {
            if (i % 2 == 0)
                sum1 = sum1 + f(a + i * h);
            else
                sum = sum + f(a + i * h);
        }
        ics1 = (h / 3) * (f(a) + f(b) + 4 * sum + 2 * sum1);
        printf("Ics1 = %.4f\n", ics1);
        break;

    /// Solution for Simpson's 3/8 Rule i.e Is2
    case 5:
        h = (b - a) / 3;
        is2 = (3 * h / 8) * (f(a) + f(b) + 3 * f(a + h) + 3 * f(a + 2 * h));
        printf("Is2 = %.4f\n", is2);
        break;

    /// Solution for Boole's Rule i.e Ib
    case 6:
        h = (b - a) / 4;
        ib = (2 * h / 45) * (7 * f(a) + 7 * f(b) + 12 * f(a + 2 * h) + 32 * (f(a + h) + f(a + 3 * h)));
        printf("Ib = %.4f\n", ib);
        break;

    case 7:
        exit(0);

    default:
        printf("\nEnter the correct choice...\n");
    }
    goto a;
    getch();

    system("pause");
}
