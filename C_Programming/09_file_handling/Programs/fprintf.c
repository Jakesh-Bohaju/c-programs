/*

Implementation of fprintf()

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    int num = 42;
    float pi = 3.14159;
    char str[] = "Hello, World!";

    fptr = fopen("implement_fprintf.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file in write mode\n");
        exit(1);
    }

    fprintf(fptr, "Integer: %d\n", num);
    fprintf(fptr, "Float: %.2f\n", pi);
    fprintf(fptr, "String: %s\n", str);

    fclose(fptr);  // Close the file after writing

    fptr = fopen("abc.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file in append mode\n");
        exit(1);
    }

    fprintf(fptr, "Appending more data...\n");
    fprintf(fptr, "New Integer: %d\n", num * 2);
    fprintf(fptr, "New Float: %.2f\n", pi * 2);
    fprintf(fptr, "New String: %s\n", "Appended Text");

    fclose(fptr);  // Close the file after appending

    return 0;
}

