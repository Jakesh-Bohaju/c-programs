#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("\t*");
        }
        printf("\n");
    }

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf("\t*");
        }
        printf("\n");
    }

    system("pause");
}