/*

Implementation of fprintf()

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    int num;
    float pi;
    char str[50];

    // Open file for reading
    fptr = fopen("implement_fprintf.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    // Read data from file using fscanf
    fscanf(fptr, "Integer: %d\n", &num);
    fscanf(fptr, "Float: %f\n", &pi);
    fscanf(fptr, "String: %[^\n]\n", str);

    fclose(fptr);

    // Display the data
    printf("Read from file:\n");
    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", pi);
    printf("String: %s\n", str);

    return 0;
}


