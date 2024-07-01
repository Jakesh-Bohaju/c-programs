/*
Program related to local and global variable(Automatic and External)
*/

#include<stdio.h>
int a = 10;
int b = 3;
void fun()
{
    printf("Global variable a from user-define function: %d\n", a);
    printf("Global variable b from user-define function: %d\n", b);
    a = 20;
    printf("local variable from user-define function: %d\n", a);
}
void main()
{
    printf("Global variable a from main function: %d\n", a);
    printf("Global variable b from main function: %d\n", b);
    a = 25;
    printf("local variable from main function: %d\n", a);
    fun();
}