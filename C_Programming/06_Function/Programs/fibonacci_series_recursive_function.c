/*
Program to find fibonacci series using recursive function
*/

#include<stdio.h>

int fibo(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return (fibo(n-1) + fibo(n-2));
    }
}

void main()
{
    int terms,i;
    printf("How many terms do you need?\t");
    scanf("%d", &terms);
    for(i=1; i<=terms; i++)
    {
        printf("%d\t",fibo(i));
    }
}
