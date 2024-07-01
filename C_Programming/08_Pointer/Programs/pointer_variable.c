/*
pointer variable initialization
*/

#include<stdio.h>

void main()
{
    int a=10, *p;
    p = &a;
    printf("Address of a is %u",&a);
    printf("Address of a is %u",p);
    printf("Value of a is %d",a);
    printf("Value of a is %d",*p);
    printf("Address of p is %u",&p);
}