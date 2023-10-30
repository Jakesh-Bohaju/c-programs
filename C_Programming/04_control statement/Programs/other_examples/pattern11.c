#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf("\t");
        }
        for (j = i; j <= 2 * i - 1; j++)
        {
            printf("\t%d", j);
        }
        for (j = 2 * i - 2; j >= i; j--)
        {
            printf("\t%d", j);
        }
        printf("\n");
    }
    system("pause");
}