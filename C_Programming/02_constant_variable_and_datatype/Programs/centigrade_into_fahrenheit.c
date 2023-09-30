/*
Centigrde into fahrenheit conversion


For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float centigrade, fahrenheit;
    char degree = 248;   // for degree symbol
    printf("Enter temperature inn centigrade : ");
    scanf("%f", &centigrade);
    fahrenheit = 9.0 / 5 * centigrade + 32;
    printf("Centigrade temperature : %.2f%cC\n", centigrade, degree);
    printf("Fahrenheit temperature : %.2f%cF\n", fahrenheit, degree);

    system("pause");
}