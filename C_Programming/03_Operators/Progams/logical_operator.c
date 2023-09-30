/*
Implementation of logical operator

Logical Operators
An expression containing logical operator returns either 0 or 1 depending upon whether expression results true or false. Logical operators are commonly used in decision making in C programming.

Operator	Meaning	                                                Example
&&	        Logical AND. True only if all operands are true           If c = 5 and d = 2 then, expression ((c==5) && (d>5)) equals to 0.
||	        Logical OR. True only if either one operand is true	      If c = 5 and d = 2 then, expression ((c==5) || (d>5)) equals to 1.
!	        Logical NOT. True only if the operand is 0	              If c = 5 then, expression !(c==5) equals to 0.

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a = 5, b = 5, c = 10;

    int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);

    result = !(a != b);
    printf("!(a != b) is %d \n", result);

    result = !(a == b);
    printf("!(a == b) is %d \n", result);

    system("pause");
}