/*
Author : Jakesh Bohaju

Program to input second and convert into hour minute and second...

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int time, hour, minute, second;
    printf("Enter time in seconds : ");
    scanf("%d", &time);
    hour = time/3600;
    minute = (time%3600)/60;
    second = (time%3600)%60;
    printf("Time in Hour:Minute:Second is %d:%d:%d\n",hour, minute, second);
    
    system("pause");
}