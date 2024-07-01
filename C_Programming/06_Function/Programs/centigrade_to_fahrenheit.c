#include<stdio.h>

//function definition
float centigradeToFahrenheit(float centi)
{
    float f;
    f = 9.0/5*centi+32;
    return f;
}

void main()
{
    float c, f;
    printf("Enter temperature in centigrade: ");
    scanf("%f",&c);
    f = centigradeToFahrenheit(c);   //function call with argument and return type
    printf("The equivalent temperature in Fahrenheit is : %.2f",f);
}

