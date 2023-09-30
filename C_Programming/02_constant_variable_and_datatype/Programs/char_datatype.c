/*
Author : Jakesh Bohaju

Implementation of char data type

Character data type allows its variable to store only a single character. The size of the character is 1 byte. It is the most basic data type in C. It stores a single character and requires a single byte of memory in almost all compilers.

Range: (-128 to 127) or (0 to 255)
Size: 1 byte
Format Specifier: %c

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    char letter1 = 'A', letter2 = 'B';
    printf("The character is %c.", letter1);
    printf("\nThe ASCII value of character %c is %d.\n",letter2, letter2);
    
    system("pause");
}