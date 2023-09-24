// WAP to read number from user and test whether the number is positive or negative

/*
Author : Jakesh Bohaju

Implementation of if .... else if statement.
If entered number is greater than 0, display print statememt from if statement.
If entered number is less than 0, display print statememt from else if statement.
If entered number is 0, display print statemet from else.


For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int number;
    printf("Enter number : ");
    scanf("%d", &number);
    if(number > 0)
    {
        printf("The number %d is positive number.\n", number);
    }
    else if(number < 0)
    {
        printf("The number %d is negative number.\n", number);
    }
    else
    {
        printf("The number %d is neither negative nor positive.\n", number);
    }
    system("pause");
}
