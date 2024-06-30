/*
Author : Jakesh Bohaju

Basic implementation of function.....

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

int greater(int, int);

void main()
{
    int a, b, greater_value;
    printf("Enter two numbers : ");
    scanf("%d%d",&a, &b);
    greater_value = greater(a,b);
    if(greater_value == 0)
    {
        printf("Neither %d greater not %d. It's equal.",a ,b);
    }
    else
    {
        printf("Greater number among %d and %d is %d",a, b, greater_value);
    }
}

int greater(int x, int y)
{
    if(x>y)
    {
        return x;
    }
    else if(x<y)
    {
        return y;
    }
    else
    {
        return 0;
    }
}