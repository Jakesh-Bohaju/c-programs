/*
Implementation of conditional operator

Conditional Operator in C
Conditional Operator is a ternary operator as it works on three operands. The Conditional Operator behaves like an if-else statement.


With the help of Conditional Operator, we can also do all the work done by if-else.
With the conditional operator, we can write code using very few lines.
Conditional statements are represented by two symbols, namely, ‘? Is represented by ‘and’: ‘. (?:)

Syntax of Conditional Operator In C
Expression1? expression2: expression3;

Look at this syntax, if the condition of Expression1 is True, then Expression2 runs or else Expression3 runs.

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int age; // variable declaration

    printf("Enter your age \n");
    scanf("%d", &age); // taking user input for age variable
                       // conditional operator
    (age >= 18) ? (printf("eligible for voting")) : (printf("not eligible for voting"));

    system("pause");
}