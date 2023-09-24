// WAP to check wheather the inputted number is odd or even

/*
Author : Jakesh Bohaju

The following program implement nested if else statement.
Initially check if the entered number is 0 or not. If false then execute code from if statement; if not print else statement.
If the number is not 0 then check the remainder, if remainder is 0 then print even; if not display odd number.


For more visit : https://github.com/Jakesh-Bohaju/c-programs.git
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    if(number != 0)
    {
        if(number % 2 == 0)
        {
            printf("The number %d is even number.\n", number);
        }
        else{
            printf("The number %d is odd number.\n", number);
        }
    }
    else{
        printf("The number %d is neither even nor odd number.\n", number);
    }
        system("pause");
}