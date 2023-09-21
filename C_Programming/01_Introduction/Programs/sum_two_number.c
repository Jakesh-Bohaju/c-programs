/*
Author : Jakesh Bohaju

Program ask for input two number and sum them.

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int first_number;
    float second_number, result;
    printf("Enter first number : ");
    scanf("%d", &first_number);
    printf("Enter second number : ");
    scanf("%f", &second_number);
    result = first_number + second_number;
    printf("Sum of two number.\n%d + %f = %f\n",first_number, second_number, result);
    
    system("pause");
}