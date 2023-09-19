// WAP to check the input string is "a"

/*
Author : Jakesh Bohaju

Implementation of if statement. If the entered letter is 'a' then program display print statemetnt.
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    char letter;
    printf("Write the letter 'a' : ");
    scanf("%c", &letter);
    if(letter == 'a')
    {
        printf("That's true, it is %c.", letter);
    }
        system("pause");
}