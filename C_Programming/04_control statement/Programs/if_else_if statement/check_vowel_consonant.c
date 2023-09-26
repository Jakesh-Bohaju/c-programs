/*
User input alphabet and check either it is vowel or consonant using if....else if statement

vowel letters are 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    char alphabet;
    printf("Enter any alphabet.\n");
    scanf("%c", &alphabet);
    
    if(alphabet == 'a' || alphabet == 'A')
    {
        printf("%c is a vowel letter.\n", alphabet);
    }
    else if(alphabet == 'e' || alphabet == 'E')
    {
        printf("%c is a vowel letter.\n", alphabet);
    }
    else if(alphabet == 'i' || alphabet == 'I')
    {
        printf("%c is a vowel letter.\n", alphabet);
    }
    else if(alphabet == 'o' || alphabet == 'O')
    {
        printf("%c is a vowel letter.\n", alphabet);
    }
    else if(alphabet == 'u' || alphabet == 'U')
    {
        printf("%c is a vowel letter.\n", alphabet);
    }
    else
    {
        printf("%c is a consonant letter.\n", alphabet);
    }
    
    system("pause");
}