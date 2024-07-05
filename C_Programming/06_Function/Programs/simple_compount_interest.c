/*
WAP to calculate simple interest and compound interest yearly making two different functions.

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float simpleInterest(float p, float t, float r)
{
    float result;
    result = p * t * r / 100;
    return result;
}

float compoundInterest(float p, float t, float r)
{
    float result;
    result = p * ( pow(1 + r / 100 , t) -1 );
    return result;
}

void main()
{
    float principal, rate, time, interest;
    int choice;
    system("cls");
    new_data:
    printf("\nEnter Principal : ");
    scanf("%f", &principal);
    printf("Enter Rate : ");
    scanf("%f",&rate);
    printf("Enter Time : ");
    scanf("%f",&time);
    start:
    printf("\nChoose what you want to calculate\n1. Simple Interest\n2. Compound Intrerest\n4. With new data\n3. Exit\nYour choice :  ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        interest = simpleInterest(principal, time, rate);
        printf("Principal = %f\nTime : %f\nRate :  %f\nSimple Interest : %f\n",principal, time, rate, interest);
        goto start;

    case 2:
        interest = compoundInterest(principal, time, rate);
        printf("\nPrincipal = %f\nTime : %f\nRate :  %f\nCompound Interest : %f\n",principal, time, rate, interest);
        goto start;
        goto start;
         
    case 3:
        goto new_data;
    
    case 4:
        printf("Thank you!!! Visit Again...\n");
        exit(0);

    default:
        printf("You enter invalid option... Try again\n");
        goto start;
    }
    
    system("pause");
}

