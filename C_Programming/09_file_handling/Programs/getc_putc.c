/*

Implementation of fgetc() and fgetc()

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>


void main()
{   
    FILE *fptr;
    char c, filename[20];
    printf("Enter file name with extension (.txt): ");
    scanf("%s", &filename);
    fptr = fopen(filename,"w");
    if(fptr == NULL)
    {
        printf("File can not be created");
        exit(1);
    }
    while ((c = getchar()) != EOF)
    {
        fputc(c, fptr);
    }
    fclose(fptr);
    printf("\nOpen File closed\n");

    fptr = fopen(filename,"r");
    if (fptr == NULL)
    {
        printf("Error opening file for reading\n");
        exit(1);
    }
    while ((c = fgetc(fptr)) != EOF)
    {
        putchar(c);
    }
    
    fclose(fptr);
   
    system("pause");
}


