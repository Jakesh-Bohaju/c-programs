/*
For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

void main()
{   
    int num[3];
    for (int i; i<5; i++)
    {
        scanf("%d",&num[i]);
    }
    for (int j=0; j<5; j++)
    {
        printf("%d",num[j]);
    }

    
    system("pause");
}

