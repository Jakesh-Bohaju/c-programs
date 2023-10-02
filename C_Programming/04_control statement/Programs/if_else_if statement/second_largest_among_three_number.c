/*
Author : Jakesh Bohaju

Enter three number and find the second largest number among those three numbers.


For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int number1, number2, number3;
    printf("Enter three number : ");
    scanf("%d%d%d", &number1, &number2, &number3);
    if((number1 > number2 && number1 < number3) || (number1 > number3 && number1 < number2))
    {
        printf("%d is second largest number.\n", number1);
    }
    else if((number2 > number1 && number2 < number3) || (number2 > number3 && number2 < number1))
    {
        printf("%d is second largest number.\n", number2);
    }
    else
    {
        printf("%d is second largest number.\n", number3);
    }
    system("pause");
}
