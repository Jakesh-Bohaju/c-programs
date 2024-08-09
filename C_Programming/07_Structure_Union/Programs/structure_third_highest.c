/*

5.	Create structure name Employee with members name, address, salary, dateJoin. 
WAP to read information of 5 employee and display employee detail with third highest salary.

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
            if (e[j].salary<e[i].salary)
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
    printf("%s\t\t%s\t\t%.2f\t\t%d-%d-%d\n", e[2].name, e[2].address, e[2].salary, e[2].dateJoin.day, e[2].dateJoin.month, e[2].dateJoin.year);
   
    system("pause");
}


