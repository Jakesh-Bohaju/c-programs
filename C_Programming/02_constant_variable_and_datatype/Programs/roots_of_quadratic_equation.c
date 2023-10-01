/*
Author : Jakesh Bohaju

Calulate roots of quadratic equation

root1 = (-b + sqrt(b * b -4 * a * c)) / 2 * a
root2 = (-b - sqrt(b * b -4 * a * c)) / 2 * a

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float a, b, c, root1, root2;
    printf("Enter coefficient of x^2 : ");
    scanf("%f", &a);
    printf("Enter coefficient of x : ");
    scanf("%f", &b);
    printf("Enter constant : ");
    scanf("%f", &c);
    if (a > 0)
    {
        float deter = sqrt(b * b - 4 * a * c);
        if (deter >= 0)
        {
            root1 = (-b + deter) / (2 * a);
            root2 = (-b - deter) / (2 * a);
            printf("Root1 = %f\nRoot2 = %f\n", root1, root2);
        }
        else
        {
            printf("Roots are complex number.\n");
        }
    }
    else
    {
        printf("Equation must be quadratic equation with non zero coefficient of x^2.\n");
    }

    system("pause");
}