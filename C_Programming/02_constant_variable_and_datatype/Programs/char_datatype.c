/*
Author : Jakesh Bohaju

Implementation of char data type

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    char letter1, letter2;
    printf("Enter two letter word.\n");
    scanf("%c%c", &letter1, &letter2);
    printf("Entered letters are:\n\tfirst letter : %c\n\tsecond letter : %c\n",letter1, letter2);
    
    system("pause");
}