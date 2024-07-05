/*
WAP to display all prime numbers between n1 and n2 where n1<n2, using function.

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

void allPrimeNumber(int n1, int n2)
{       
    int i, num;
    for(num=n1; num <= n2; num++)
    {
        for(i=2; i < num; i++)
        {
            if(num%i==0)
            {
                break;
            }            
        }
        if(i==num)
        {
            printf("%d\n", num);
        }
    }
    
}


void main()
{
    int n1,n2;
    printf("Enter first number : ");
    scanf("%d",&n1);
    printf("Enter second number (second number must greater than first numner) : ");
    scanf("%d",&n2);
    if(n2 > n1)
    {
        allPrimeNumber(n1, n2);
    }
    else
    {
        printf("\nSecond number must greater than first number.\n");
    }

    system("pause");
}

