/*
letter conversion upper to lower or lower to upper
*/

#include <stdio.h>

void conversion(char *);

int main() {
    char input;
    printf("Enter character of your choice: ");
    scanf(" %c", &input);  // Added a space before %c to consume any leftover whitespace
    if ((input >= 65 && input <= 90) || (input >= 97 && input <= 122)) {
        conversion(&input);
        printf("The corresponding character is: %c\n", input);
    }
    else {
        printf("Enter alphabet only.\n");
    }
    return 0;
}

void conversion(char *c) {
    if (*c >= 97 && *c <= 122) {
        *c = *c - 32;  // Convert lowercase to uppercase using ASCII values
    } else{
        *c = *c + 32;  // Convert uppercase to lowercase using ASCII values
    } 
}