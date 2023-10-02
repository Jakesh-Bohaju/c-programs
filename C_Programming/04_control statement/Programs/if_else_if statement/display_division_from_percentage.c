/*
Display obtain division as per score percentage in examination

marks >= 80% => Distinction
80 > marks >= 60 => First Division
60 > marks >= 50 => Second Division
50 > marks >= 40 => Third Division
marks < 40 => Fail

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float percentage;
    printf("Enter scored percentage : \n");
    scanf("%f", &percentage);

    if (percentage <= 80)
    {
        printf("Congratulation, You are passed with Distinction.\n");
    }
    else if (80 > percentage >= 60)
    {
        printf("Congratulation, You are passed with First Division.\n");
    }
    else if (60 > percentage >= 50)
    {
        printf("Congratulation, You are passed with Second Division.\n");
    }
    else if (50 > percentage >= 40)
    {
        printf("Congratulation, You are passed with Third Division.\n");
    }
    else
    {
        printf("Sorry, You are fail, better luck next time.\n");
    }

    system("pause");
}