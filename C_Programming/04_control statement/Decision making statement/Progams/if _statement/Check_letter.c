// WAP to check the input string is "a"

/*
Author : Jakesh Bohaju

Implementation of if statement. If the entered letter is 'a' then program display print statemetnt.


For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

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