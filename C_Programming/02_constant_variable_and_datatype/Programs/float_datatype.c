/*
Author : Jakesh Bohaju

Implementation of float data type

In C and many other programming languages, float, double, and long double are data types used to represent floating-point numbers with different levels of precision and range. Here's an overview of each:
1) float:
    Single-precision floating-point number.
    Typically occupies 4 bytes (32 bits) in memory.
    Provides around 6-9 decimal digits of precision.
    Represents a wide range of values but with lower precision compared to double and long double.
    conversion character : f

    float myFloat = 3.14;

2) double:
    Double-precision floating-point number.
    Typically occupies 8 bytes (64 bits) in memory, twice the size of a float.
    Provides approximately 15-17 decimal digits of precision.
    Offers a wider range and higher precision compared to float.
    conversion character : lf

    double myDouble = 3.14159265359;

3) long double:
    Extended precision floating-point number.
    The size of a long double is platform-dependent but is typically larger than a double.
    Provides the highest precision and a wider range among the three.
    Often used for applications that require extremely high precision, such as scientific computing.
    conversion character : Lf

    long double myLongDouble = 3.14159265358979323846L;


The choice of which type to use depends on the requirements of your program:
If you need high precision and a wide range, use long double.
For most general-purpose calculations, double is a good choice as it strikes a balance between precision and memory usage.
float may be suitable for scenarios where memory usage is a significant concern, and you can tolerate lower precision.
When performing arithmetic operations involving these types, it's essential to be aware of potential precision loss, especially when mixing float and double in the same computation. Implicit type conversion rules may affect the results, so it's important to consider the specific requirements of your application and choose the appropriate data type accordingly.

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float float_pi = M_PI;             // Using the M_PI constant from the math library
    double double_pi = M_PI;           // Using the M_PI constant from the math library
    long double long_double_pi = M_PI; // Using the M_PI constant from the math library

    printf("Long Double Pi: %.10f\n", float_pi);
    printf("Long Double Pi: %.20lf\n", double_pi);
    printf("Long Double Pi: %.25Lf\n", long_double_pi);

    printf("\n\nsize of long double= %d bytes\n", sizeof(float_pi));
    printf("size of long double= %d bytes\n", sizeof(double_pi));
    printf("size of long double= %d bytes\n", sizeof(long_double_pi));
   

    system("pause");
}