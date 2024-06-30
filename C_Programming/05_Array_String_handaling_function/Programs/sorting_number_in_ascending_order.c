#include <stdio.h>
#include <stdlib.h>

void main()
{
    int numbers[50], i, j, n, temp;
    printf("\nHow many numbers are there? (Max 50): ");
    scanf("%d", &n);
    printf("\nEnter %d numbers:\n", n);
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (numbers[i] > numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    printf("\nThe numbers in ascending order is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", numbers[i]);
    }
    printf("\n");

    system("pause");
}