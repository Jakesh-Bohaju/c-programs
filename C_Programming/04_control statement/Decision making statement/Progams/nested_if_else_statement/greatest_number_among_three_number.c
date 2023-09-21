//WAP to input three number and display the greatest number among them

/*
Author : Jakesh Bohaju

Implementation of nested if else statement

let the number be 
a = 5
b = 6
c = 8
if a>b and a>c, a is greater. 
if a>b and a<c, c is greater
if a<b and b>c, b is greater
if a<b and b<c, c is greater


For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    float first_number, second_number, third_number;
    printf("Enter three numbers\n");
    scanf("%f%f%f", &first_number, &second_number, &third_number);

    if(first_number > second_number)
    {
        if(first_number > third_number)
        {
            printf("The greatest number is %f.\n", first_number);
        }
        else
        {
            printf("The gratest number is %f.\n", third_number);
        }
    }
    else
    {
        if(second_number > third_number)
        {
            printf("The greatest number is %f.\n",second_number);
        }
        else
        {
            printf("The greatest number is %f.\n",third_number);
        }
    }

    system("pause");
}