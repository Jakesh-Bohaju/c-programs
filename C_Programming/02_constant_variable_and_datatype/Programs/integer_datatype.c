/*
Author : Jakesh Bohaju

Integer Data type:
Six type of integer
1) Integer => %d
2) Unsigned Integer => %u
3) Short Integers => %hd
4) Unsigned Long Integers => %hu
4) Long Integers => %ld
4) Unsigned Long Integers => %lu

Maximum value for int: 2147483647
Maximum value for unsigned int: 4294967295
Maximum value for short int: 32767
Maximum value for unsigned short int: 65535
Maximum value for long int: 2147483647
Maximum value for unsigned long int: 4294967295

*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>  // this header file for INT_MAX, UINT_MAX, .......

void main()
{
    int integer_no;
    short int short_integer;
    long int long_integer;
    unsigned int positive_integre;
    unsigned short int positive_short_integer;
    unsigned long int positive_long_integer;

    printf("Maximum value for int: %d\n", INT_MAX);
    printf("Maximum value for unsigned int: %u\n", UINT_MAX);
    printf("Maximum value for short int: %d\n", SHRT_MAX);
    printf("Maximum value for unsigned short int: %u\n", USHRT_MAX);
    printf("Maximum value for long int: %ld\n", LONG_MAX);
    printf("Maximum value for unsigned long int: %lu\n", ULONG_MAX);

    printf("\nYou can input max values for variable as shown above.\n");

    printf("Enter integer number : ");
    scanf("%d", &integer_no);
    printf("Enter unsigned integer number : ");
    scanf("%u", &positive_integre);
    printf("Enter short integer number : ");
    scanf("%hd", &short_integer);
    printf("Enter unsigned short integer number : ");
    scanf("%hu", &positive_short_integer);
    printf("Enter long integer number : ");
    scanf("%ld", &long_integer);
    printf("Enter unsigned long integer number : ");
    scanf("%lu", &positive_long_integer);

    printf("\nEntered Values\nInteger : %d\nUnsigned Integer : %u\nShort Integer : %hd\nUnsigned Short Integer : %hu\nLong Integer : %ld\nUnsigned Long Integer : %lu\n", integer_no, positive_integre, short_integer, positive_short_integer, long_integer, positive_long_integer);

    system("pause");
}