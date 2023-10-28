#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, j, k = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("\t%d", k++);
        }
        printf("\n");
    }
    system("pause");
}