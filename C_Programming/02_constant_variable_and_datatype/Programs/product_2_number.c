/*
Product 2 numbers
product = a * b;
For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float a, b, product;
    printf("Enter first number : ");
    scanf("%f", &a);
    printf("Enter second number : ");
    scanf("%f", &b);
    product = a * b;
    printf("The product is : %.2f", product);

    system("pause");
}