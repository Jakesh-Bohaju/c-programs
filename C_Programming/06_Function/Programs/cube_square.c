/*
WAP to find cubes and squares of first 10 natural numbers using function.

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int cube(int num)
{       
    return (int)pow(num,3);
}

int square(int num)
{
    return (int)pow(num,2);
}

void main()
{
    printf("Number\t\tSauare\t\tCube\n");
    for(int i=0; i<10; i++)
    {
        printf("%d\t\t%d\t\t%d\n",i,square(i), cube(i));
    }
    
    system("pause");
}

