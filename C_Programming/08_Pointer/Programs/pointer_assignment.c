/*
pointer assignment
*/

#include <stdio.h>

void main() {
    int a = 5, b = 15;
    int *p1, *p2;
    p1 = &a; 
    p2 = &b; 
    printf("Before assignment: *p1 = %d, *p2 = %d\n", *p1, *p2);
    p1 = p2; 
    printf("After assignment: *p1 = %d, *p2 = %d\n", *p1, *p2);
}