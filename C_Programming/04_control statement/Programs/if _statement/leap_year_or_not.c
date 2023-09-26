/*
Check user input year is leap year or not

Leap years are special years that have an extra day, February 29th, to account for the fact that it takes approximately 365.2422 days for the Earth to orbit the sun. This extra day is added to keep our calendar year synchronized with the solar year. To determine whether a year is a leap year or not, you can follow these rules:
Rule 1: The year must be evenly divisible by 4. If a year is not divisible by 4, it cannot be a leap year.
Rule 2: Exception to Rule 1 - Years divisible by 100. If a year is divisible by 100, it is not a leap year unless it is also divisible by 400.
Rule 3: Exception to Rule 2 - Years divisible by 400. If a year is divisible by 400, it is a leap year, even if it's divisible by 100.

Examples:
The year 2000 is a leap year because it is divisible by 400.
The year 1900 is not a leap year because it is divisible by 100 but not by 400.
The year 2020 is a leap year because it is divisible by 4 and not divisible by 100 (Rule 1).

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int year;
    printf("Enter a year to check leap  year or not : ");
    scanf("%d", &year);
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }

        system("pause");
}