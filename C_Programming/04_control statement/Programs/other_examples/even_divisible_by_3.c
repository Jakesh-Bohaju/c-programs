//Write a program to read two integer numbers n1 and n2 (n1 < n2), display all number which is even and divisible by 3

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n1, n2;
    printf("Enter the first integer (n1): ");
    scanf("%d", &n1);
    printf("Enter the second integer (n2, n2 > n1): ");
    scanf("%d", &n2);

    if (n1 >= n2)
    {
        printf("n1 must be less than n2.\n");
    }

    printf("Even numbers between %d and %d that are divisible by 3:\n", n1, n2);

    for (int i = n1; i <= n2; i++)
    {
        if (i % 2 == 0 && i % 3 == 0)
        {
            printf("%d\n", i);
        }
    }
    system("pause");
}