/*
Author : Jakesh Bohaju

Implementation of escape sequence

Escape Sequence	    Name	           Description
\a	                Alarm or Beep	    It is used to generate a bell sound in the C program.
\b	                Backspace   	    It is used to move the cursor one place backward.
\f	                Form Feed	        It is used to move the cursor to the start of the next logical page.
\n	                New Line	        It moves the cursor to the start of the next line.
\r	                Carriage Return	    It moves the cursor to the start of the current line.
\t	                Horizontal Tab	    It inserts some whitespace to the left of the cursor and moves the cursor accordingly.
\v	                Vertical Tab	    It is used to insert vertical space.
\\	                Backlash	        Use to insert backslash character.
\’	                Single Quote	    It is used to display a single quotation mark.
\”	                Double Quote	    It is used to display double quotation marks.
\?	                Question Mark	    It is used to display a question mark.
\ooo	            Octal Number	    It is used to represent an octal number.
\xhh	            Hexadecimal Number	It represents the hexadecimal number.
\0	                NULL	            It represents the NULL character.


For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    char newline = '\n';
    char tab = '\t';
    char backspace = '\b';
    char carriageReturn = '\r';
    char singleQuote = '\'';
    char doubleQuote = '\"';
    char backslash = '\\';

    printf("Escape Sequences in Character Constants:\n");
    printf("Newline: %c\n", newline);
    printf("Tab: %c\n", tab);
    printf("Backspace: %c\n", backspace);
    printf("Carriage Return: %c\n", carriageReturn);
    printf("Single Quote: %c\n", singleQuote);
    printf("Double Quote: %c\n", doubleQuote);
    printf("Backslash: %c\n", backslash);

    // Escape sequences in strings
    printf("\nEscape Sequences in Strings:\n");
    printf("Hello,\\tWorld! => Hello,\tWorld!\n");
    printf("Hello,\\nWorld! => Hello,\nWorld!\n");
    printf("Hello,\\bWorld! => Hello,\bWorld!\n");
    printf("Hello,\\rWorld! => Hello,\rWorld!\n");
    printf("Hello,\\'World! => Hello,'World!\n");
    printf("Hello,\\\"World! => Hello,\"World!\n");
    printf("Hello,\\\\World! => Hello,\\World!\n");
        
    system("pause");
}