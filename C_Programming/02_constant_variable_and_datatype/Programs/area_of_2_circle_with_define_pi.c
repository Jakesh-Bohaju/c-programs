/*
Area two circle with define value of PI and find sum of areas


For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>
#define Pi 3.1428

void main()
{
    float radius1, area1, radius2, area2, total_area;
    printf("Enter radius of first circle : ");
    scanf("%f", &radius1);
    printf("Enter radius of second circle : ");
    scanf("%f", &radius2);
    area1 = Pi * radius1 * radius1;
    area2 = Pi * radius2 * radius2;
    total_area = area1 + area2;
    printf("Area of first circle is : %.4f\n", area1);
    printf("Area of second circle is : %.4f\n", area2);
    printf("Total area of two circle is : %.4f\n", total_area);

    system("pause");
}