/*

6.	Create structure name Employee with members name, address, salary, dateJoin.
WAP to read information of 5 employee and display employee detail in ascending order of their name.

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define SIZE 5

void main()
{   
    struct date
    {
        int day;
        int month;
        int year;
    };

    struct Employee
    {
        char name[20];
        char address[30];
        float salary;
        struct date dateJoin;
    };

    struct Employee e[SIZE], temp;

    for (int i = 0; i < SIZE; i++)
    {
        printf("\nEnter information of Employee no %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", e[i].name);
        printf("Enter address: ");
        scanf("%s", e[i].address);
        printf("Enter salary: ");
        scanf("%f", &e[i].salary);
        printf("Enter day of joining: ");
        scanf("%d", &e[i].dateJoin.day);
        printf("Enter month of joining: ");
        scanf("%d", &e[i].dateJoin.month);
        printf("Enter year of joining: ");
        scanf("%d", &e[i].dateJoin.year);
    }

    // Sorting employees by name in ascending order
    for (int j = 0; j < SIZE - 1; j++)
    {
        for (int i = j + 1; i < SIZE; i++)
        {
            if (strcmp(e[j].name, e[i].name) > 0)
            {
                temp = e[j];
                e[j] = e[i];
                e[i] = temp;
            }
        }
    }

    // Displaying the employee details
    printf("\nDetail Information of Employees\n");
    printf("Name\t\t\tAddress\t\t\tSalary\t\tDate of Joining");
    printf("\n_______________________________________________________\n");
    for (int j = 0; j < SIZE; j++)
    {
        printf("%s\t\t%s\t\t%.2f\t\t%d-%d-%d\n", e[j].name, e[j].address, e[j].salary, e[j].dateJoin.day, e[j].dateJoin.month, e[j].dateJoin.year);
    }
    system("pause");
}

