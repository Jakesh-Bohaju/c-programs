/*
Program for Gauss Elimination Method

Author : Jakesh Bohaju


For more visit : https://github.com/Jakesh-Bohaju/c-programs.git
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, i, j, dum;
    float a[10][10], k, sum, x[10];
    system("cls");
    printf("\n Enter the no of equation or unkown = ");
    scanf("%d", &n);
    printf("\n Enter the element of augmented matrix");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n + 1; j++)
        {

            printf("\n Enter the element a[%d][%d]= ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
    printf("\n The Enter augmented matrix is");
    for (i = 1; i <= n; i++)
    {
        printf("\n");
        for (j = 1; j <= n + 1; j++)
        {
            printf("% 0.2f\t", a[i][j]);
        }
    }
    // Triangularisation begins from here
    for (dum = 1; dum <= n - 1; dum++)
    {
        for (i = dum; i <= n - 1; i++)
        {
            k = a[i + 1][dum] / a[dum][dum];
            for (j = dum; j <= n + 1; j++)
            {
                a[i + 1][j] -= (k * a[dum][j]);
            }
        }
    }
    /*printf("\n The triangularised augmented matrix");
    for (i = 1; i <= n; i++)
    {
        printf("\n");
        for (j = 1; j <= n + 1; j++)
        {
            printf("\n %.2f\t", a[i][j]);
        }
    }*/
    // Backward substitution begins from here
    for (i = n; i > 0; i--)
    {
        sum = 0;
        for (j = n; j > 0; j--)
        {
            if (j > i)
            {
                sum += (a[i][j] * x[j]);
            }
            else
            {
                x[i] = (a[i][n + 1] - sum) / a[i][j];
                break;
            }
        }
    }
    // The output begins from here
    printf("\n The calculation of the given system of liner equation is");
    for (i = 1; i <= n; i++)
    {
        printf("\n x[%d]=%2f", i, x[i]);
    }
    getch();
    system("pause");
}
