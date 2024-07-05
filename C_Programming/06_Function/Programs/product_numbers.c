/*
WAP which receive float and int number as argument from main() function, find their product and 
return result.

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

float product(float, int);

void main()
{
    float num1, result;
    int num2;
    printf("Enter decimal number: ");
    scanf("%f", &num1);
    printf("Enter non decimal number: ");
    scanf("%d",&num2);
    result = product(num1, num2);
    printf("The product of %f and %d is %f.\n",num1, num2, result);

    system("pause");
}

float product(float float_num1, int int_num2)
{
    // return (float_num1 * int_num2); 
    return (float_num1 * (float)int_num2);   //with type conversion
}