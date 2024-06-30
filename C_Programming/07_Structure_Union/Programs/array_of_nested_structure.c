/*
Implementation of Array of structure and Nested structure


For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    // user defined datatype date
    struct date
    {
        int day;
        int month;
        int year;
    };
    // user defined datatype Employee
    struct Employee
    {
        char name[20];
        int id;
        struct date dateOfBirth;
        float salary;
    };
    // array variable for user defined datatype
    struct Employee emp[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Name of Employee : ");
        scanf("%s", emp[i].name);
        printf("ID of Employee : ");
        scanf("%d", &emp[i].id);
        printf("Day of birthday : ");
        scanf("%d", &emp[i].dateOfBirth.day);
        printf("Month of birthday : ");
        scanf("%d", &emp[i].dateOfBirth.month);
        printf("Year of birthday : ");
        scanf("%d", &emp[i].dateOfBirth.year);
        printf("Salary of Employee : ");
        scanf("%f", &emp[i].salary);
    }
    printf("\n\nDetail information of Employee\n\n");
    printf("----------------------------------------------------------------");
    printf("\nName\tID\tDay\tMonth\tYear\tSalary");
    printf("\n---------------------------------------------------------------\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\t%d\t%d\t%d\t%d\t%.2f", emp[i].name, emp[i].id, emp[i].dateOfBirth.day,
               emp[i].dateOfBirth.month, emp[i].dateOfBirth.year, emp[i].salary);
        printf("\n-----------------------------------------------------------\n");
    }

    system("pause");
}