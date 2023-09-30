/*
calculate compound interest

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float p, t, r, i;
    printf("Enter principal amount in Rs. : ");
    scanf("%f", &p);
    printf("Enter time in year  : ");
    scanf("%f", &t);
    printf("Enter rate in % per annum : ");
    scanf("%f", &r);
    i = p * (pow(1 + r / 100, t) - 1);
    printf("The compound interest is Rs. %.2f\n", i);

    system("pause");
}