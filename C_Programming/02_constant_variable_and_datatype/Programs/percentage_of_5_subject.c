/*
Calculate percentage from marks secure in 5 subjects


For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int sub1, sub2, sub3, sub4, sub5;
    float percentage;
    printf("Enter marks of first subject : ");
    scanf("%d", &sub1);
    printf("Enter marks of second subject : ");
    scanf("%d", &sub2);
    printf("Enter marks of third subject : ");
    scanf("%d", &sub3);
    printf("Enter marks of fourth subject : ");
    scanf("%d", &sub4);
    printf("Enter marks of fifth subject : ");
    scanf("%d", &sub5);
    percentage = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;
    printf("\nCongratulation you sucure %.2f percentage\n", percentage);

    system("pause");
}