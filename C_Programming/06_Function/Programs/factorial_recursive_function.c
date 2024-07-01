/*
Program to find factorial using recursive function
*/

#include<stdio.h>

long int factorial(int n)
{
    if(n==1)
    {
        return (1);
    }
    else
    {
        return (n*factorial(n-1));
    }
}

void main()
{
    int num;
    printf("Enter  number : ");
    scanf("%d", &num);
    printf("Factorial of %d is %ld",num, factorial(num));
}

