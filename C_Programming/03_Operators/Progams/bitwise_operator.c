/*
Implementation of Bitwise operator

 Bitwise Operators
During computation, mathematical operations like: addition, subtraction, multiplication, division, etc are converted to bit-level which makes processing faster and saves power.

Bitwise operators are used in C programming to perform bit-level operations.

Operators	Meaning of operators
&	        Bitwise AND
|	        Bitwise OR
^	        Bitwise exclusive OR
~	        Bitwise complement
<<	        Shift left
>>	        Shift right

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a = 12, b = 25, num = 212, i;
    printf("Output = %d", a & b);
    printf("Output = %d", a | b);
    printf("Output = %d", a ^ b);
    printf("Output = %d\n", ~35);
    printf("Output = %d\n", ~-12);

    for (i = 0; i <= 2; ++i)
    {
        printf("Right shift by %d: %d\n", i, num >> i);
    }
    printf("\n");

    for (i = 0; i <= 2; ++i)
    {
        printf("Left shift by %d: %d\n", i, num << i);
    }

    system("pause");
}