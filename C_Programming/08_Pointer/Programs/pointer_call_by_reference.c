/*
pointer assignment
*/

#include <stdio.h>

void addTen(int *num) {
    *num = *num + 10;
    printf("Inside function: %d\n", *num);
}

int main() {
    int a = 5;
    addTen(&a);
    printf("Outside function: %d\n", a);
    return 0;
}