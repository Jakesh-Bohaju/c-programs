// Write a program to read a number and display its multiplication table

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int number, range, i;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter the range (e.g., 10): ");
    scanf("%d", &range);
    printf("Multiplication table for %d up to %d:\n", number, range);

    for (i = 1; i <= range; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    
    system("pause");
}