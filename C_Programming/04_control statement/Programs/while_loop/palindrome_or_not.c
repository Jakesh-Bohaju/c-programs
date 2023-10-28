//Write a program to check the number is palindrome or not.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int number, originalNumber, reversedNumber = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &number);
    originalNumber = number;
    while (number != 0)
    {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    if (originalNumber == reversedNumber)
    {
        printf("%d is a palindrome number.\n", originalNumber);
    }
    else
    {
        printf("%d is not a palindrome number.\n", originalNumber);
    }
    system("pause");
}