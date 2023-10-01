/*
Calulate factorial of entered number

i.e. if number is 5 then factorial is 1 * 2 * 3 * 4 * 5

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    unsigned int number;
    long factorial = 1;
    printf("Enter number to find out factorial : ");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }
    printf("Factorial of %u =  %ld\n", number, factorial);

    system("pause");
}