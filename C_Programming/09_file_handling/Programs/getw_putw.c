/*

Implementation of getw() and putw()

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    int num, i;
    fptr = fopen("numbers.dat", "wb");
    if (fptr == NULL) {
        printf("Error opening file for writing\n");
        exit(1);
    }

    for (i = 1; i <= 5; i++) {
        printf("Writing %d to file\n", i);
        putw(i, fptr);
    }

    fclose(fptr);

    fptr = fopen("numbers.dat", "rb");
    if (fptr == NULL) {
        printf("Error opening file for reading\n");
        exit(1);
    }

    printf("Reading numbers from file:\n");
    while ((num = getw(fptr)) != EOF) {
        printf("%d\n", num);
    }

    fclose(fptr);

    return 0;
}

