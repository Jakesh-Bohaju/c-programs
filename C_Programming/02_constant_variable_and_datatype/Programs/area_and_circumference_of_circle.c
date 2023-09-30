/*
Area and circumference or perimeter of circle


For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float radius, area, circumference;
    printf("Enter radius of circle : ");
    scanf("%f", &radius);
    area = 3.1428 * radius * radius;
    circumference = 2 * 3.1428 * radius;
    printf("Area of circle is : %.4f\n", area);
    printf("Circumference of circle is : %.4f\n", circumference);

    system("pause");
}