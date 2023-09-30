/*
Implementation of assignment operator

Assignment Operators
An assignment operator is used for assigning a value to a variable. The most common assignment operator is =

Operator	Example	        Same as
=	        a = b	        a = b
+=	        a += b	        a = a+b
-=	        a -= b	        a = a-b
*=	        a *= b	        a = a*b
/=	        a /= b	        a = a/b
%=	        a %= b	        a = a%b

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a = 5, c;

    c = a;      // c is 5
    printf("c = %d\n", c);
    c += a;     // c is 10 
    printf("c = %d\n", c);
    c -= a;     // c is 5
    printf("c = %d\n", c);
    c *= a;     // c is 25
    printf("c = %d\n", c);
    c /= a;     // c is 5
    printf("c = %d\n", c);
    c %= a;     // c = 0
    printf("c = %d\n", c);

    system("pause");
}