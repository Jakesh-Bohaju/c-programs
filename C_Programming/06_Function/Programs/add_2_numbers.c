#include<stdio.h>
int add(int, int);   //function declaration
void main()
{
    int a, b, sum;
    printf("Enter two different numbers: ");
    scanf("%d%d",&a, &b);
    sum = add(a, b);   //function call with argument and return type
    printf("The sum of %d and %d is %d", a, b, sum);
}

//function definition
int add(int x, int y)
{
    return (x+y);
}