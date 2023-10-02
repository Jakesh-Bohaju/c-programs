/*
Ask user to enter alphabet and convert to uppercase if enter lowercase alphabet and vice-versa using ASCII values.

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char alphabet;
    printf("Enter a alphabet : ");
    scanf("%c", &alphabet);
    if (alphabet >= 65 && alphabet <= 90)
    {
        printf("The alphabet is in uppercase.\n");
        alphabet += 32;
        printf("The lowercase alphabet is %c.\n", alphabet);
    }
    else if (alphabet >= 97 && alphabet <= 122)
    {
        printf("The alphabet is in lowercase.\n");
        alphabet -= 32;
        printf("The uppercase alphabet is %c.\n", alphabet);
    }
    else
    {
        printf("This program accept only alphabet.\n");
    }
    system("pause");
}
