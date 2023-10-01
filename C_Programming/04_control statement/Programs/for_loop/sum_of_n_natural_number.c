/*
sum of n natural number

i.e if n = 3, then sum = 1 + 2 + 3 = 6

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    unsigned int n_term;
    int i, sum = 0;
    printf("Enter n term : ");
    scanf("%d", &n_term);
    for (i = 1; i <= n_term; i++)
    {
        sum = sum + i;
    }
    printf("Sum of n natural number is %d.\n", sum);

    system("pause");
}