#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, space, i, j;

    printf("Enter the number of rows (must be odd for a symmetric diamond): ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Please enter an odd number for a symmetric diamond.\n");
    }

    // Upper part of the diamond
    for (i = 1; i <= n; i += 2)
    {
        for (space = 0; space < (n - i) / 2; space++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of the diamond
    for (i = n - 2; i >= 1; i -= 2)
    {
        for (space = 0; space < (n - i) / 2; space++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    system("pause");
}