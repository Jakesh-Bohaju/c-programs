// WAP to swap two number with and without using third variable

/*
Swap using third variable, example
a = 2
b = 5
then our logic is,
c = b i.e c = 5
b = a i.e b = 2
a = c i.e a = 5

Swap without using third variable, example
a = 5
b = 2
then our logic is,
a = a + b  i.e a = 5+2 = 7
b = a - b  i.e b = 7-2 = 5
a = a - b  i.e a = 7-5 = 2

*/

#include<stdio.h>
#include<stdlib.h>

void main() 
{
    int no1, no2, temp;
    printf("Enter two number for swapping.\n");
    scanf("%d%d", &no1, &no2);
    
    // swapping two number using third variable
    printf("Swaping with using third variable 'temp'.\n");
    printf("Before swap:\n\tno1 = %d\n\tno2 = %d\n ", no1, no2);
    temp = no2;
    no2 = no1;
    no1 = temp;
    printf("\nAfter Swap:\n\tno1 = %d\n\tno2 = %d\n", no1, no2);

    // swapping two number without using third variable
    printf("Swaping without using third variable 'temp'.\n");
    printf("Updated values Before swap:\n\tno1 = %d\n\tno2 = %d\n ", no1, no2);
    no1 = no1 + no2;
    no2 = no1 - no2;
    no1 = no1 - no2;
    printf("\nAfter Swap:\n\tno1 = %d\n\tno2 = %d\n ", no1, no2);

    system("pause");
}