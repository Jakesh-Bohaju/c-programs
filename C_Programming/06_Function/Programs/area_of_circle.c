#include<stdio.h>
#define PI 3.1428

void areaOfCircle(float r)
{
    float area;
    area = PI * r * r;
    printf("Area of the circle is : %.4f\n", area);
}

void main()
{
    float r1, r2;
    printf("Enter radius of first circle: ");
    scanf("%f",&r1);
    areaOfCircle(r1); 
    printf("Enter radius of second circle: ");
    scanf("%f",&r2);
    areaOfCircle(r2); 
}

