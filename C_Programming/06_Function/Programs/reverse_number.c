/*
WAP to reverse digits of number entered by user using function. 

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

void reverse(int num)
{       
    int reversed = 0, remainder;
    printf("\nBefore reverse, number is %d", num);
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    printf("\nAfter reverse, number is %d\n", reversed);
}


void main()
{
    int num;
    printf("Enter two or more digit number for reverse: ");
    scanf("%d",&num);
    reverse(num);
    
    system("pause");
}

