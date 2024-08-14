/*

Implementation of gets() and puts()

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>


void main()
{   
    FILE *fptr;
    char s[100];
    fptr = fopen("abc.txt","w");
    if(fptr == NULL)
    {
        printf("File can not be created");
        exit(1);
    }
    else
    {
        printf("File has been successfully created");
    }

    fputs("File handling in C.", fptr);
    fclose(fptr);
    printf("\nOpen File closed\n");

    fptr = fopen("abc.txt","r");
    if (fptr == NULL)
    {
        printf("Error opening file for reading\n");
        exit(1);
    }
    fgets(s,100,fptr);
    printf("The text from file is:\t %s", s);
    fclose(fptr);
   
    system("pause");
}


