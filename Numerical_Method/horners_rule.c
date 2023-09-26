/*
Program for Horner's Method

Author : Jakesh Bohaju


For more visit : https://github.com/Jakesh-Bohaju/c-programs.git
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, i, a[10], p = 0, x;
    system("cls");
    printf("Horner's Rule\n");
    printf("Enter degree of polynomial\n");
    scanf("%d", &n);
    printf("Enter values for a0, a1, a2, .....\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter value of x: ");
    scanf("%d", &x);
    for (i = n - 1; i >= 0; i--)
    {
        p = p * x + a[i];
        printf("%d\n", p);
    }
    printf("f(x) = %d", p);
    getch();

    system("pause");
}
