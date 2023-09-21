// WAP to check the input string is "computer"

/*
Author : Jakesh Bohaju

Implementation of if else statement. If the entered letter is 'computer' then program display print statemetn from if,
otherwise display from else statement.


#include<string.h>
Include the string.h header for string-related functions like strcmp.

scanf("%s", word); 
When you use an array as an argument to scanf for a string input, 
you don't need the '&' because the array name itself represents a pointer to the first element of the array. %s is use for string input

if(strcmp(word, "computer") == 0): 
Use strcmp to compare strings.  
strcmp returns 0 when the strings are equal.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

void main() 
{
    char word[8];
    printf("Write the word 'computer' : ");
    scanf("%s", word); 

    if(strcmp(word, "computer") == 0)
    {
        printf("That's true, it is %s.", word);
    }
    else
    {
        printf("Enter correct word.");
    }
    system("pause");
}