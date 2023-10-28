//WAP to input three number and display the second largest number among them

/*
Author : Jakesh Bohaju

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int first_number, second_number, third_number;
    printf("Enter three numbers\n");
    scanf("%d%d%d", &first_number, &second_number, &third_number);

    if (first_number >= second_number && first_number >= third_number) 
    {
        if (second_number >= third_number) 
        {
            printf("The second largest number is: %d\n", second_number);
        } 
        else 
        {
            printf("The second largest number is: %d\n", third_number);
        }
    } 
    else if (second_number >= first_number && second_number >= third_number) 
    {
        if (first_number >= third_number) 
        {
            printf("The second largest number is: %d\n", first_number);
        } 
        else 
        {
            printf("The second largest number is: %d\n", third_number);
        }
    } 
    else 
    {
        if (first_number >= second_number) 
        {
            printf("The second largest number is: %d\n", first_number);
        } 
        else 
        {
            printf("The second largest number is: %d\n", second_number);
        }
    }

    system("pause");
}