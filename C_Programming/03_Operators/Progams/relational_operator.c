/*
Implementation of relational operator

Relational Operators
A relational operator checks the relationship between two operands. If the relation is true, it returns 1; if the relation is false, it returns value 0.

Relational operators are used in decision making and loops.
Operator	Meaning of Operator 	    Example
==	        Equal to	                5 == 3 is evaluated to 0
>	        Greater than	            5 > 3 is evaluated to 1
<	        Less than	                5 < 3 is evaluated to 0
!=	        Not equal to	            5 != 3 is evaluated to 1
>=	        Greater than or equal to	5 >= 3 is evaluated to 1
<=	        Less than or equal to	    5 <= 3 is evaluated to 0

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a = 5, b = 5, c = 10;

    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d > %d is %d \n", a, c, a > c);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d < %d is %d \n", a, c, a < c);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d != %d is %d \n", a, c, a != c);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);
    
    system("pause");
}