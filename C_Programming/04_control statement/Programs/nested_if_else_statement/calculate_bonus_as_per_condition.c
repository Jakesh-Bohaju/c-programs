/*

A bank has introduced an incentive policy. A bonus of 2% of the balance is given to everyone,
irrespective of their balances and 5% & 3% is given to female &male account holder respectively if their balance is more than Rs. 5000.
Write a progam to represent the following policy and calculate balance after bonus.


For more visit : https://github.com/Jakesh-Bohaju/c-programs.git
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float balance;
    char gender;
    printf("Enter your current balance : ");
    scanf("%f", &balance);
    printf("\nEnter account holder gender \ni.e m/f (m for male and f for female) : ");
    scanf("%c", &gender);
    if (gender == 'f')
    {
        if (balance > 5000)
        {
            balance = balance + 0.05 * balance;
        }
        else
        {
            balance = balance + 0.02 * balance;
        }
    }
    else if (gender == 'm')
    {
        if (balance > 5000)
        {
            balance = balance + 0.03 * balance;
        }
        else
        {
            balance = balance + 0.02 * balance;
        }
    }
    else
    {
        printf("Invalid input\n");
    }
    printf("\nBalance after bonus is %f", balance);


    system("pause");
}