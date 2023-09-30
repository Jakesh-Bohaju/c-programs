/*
Cartesian coordinate to polar coordinate

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Pi 3.1428

void main()
{
    float x, y, r, q, angle;
    printf("Enter cartesian co-ordinate x & y : ");
    scanf("%f%f", &x, &y);
    r = sqrt(x * x + y * y);
    q = atan(y / x);
    angle = 180 * q / Pi;
    printf("\nr = %f and Angle in degree = %.2f\n", r, angle);

    system("pause");
}