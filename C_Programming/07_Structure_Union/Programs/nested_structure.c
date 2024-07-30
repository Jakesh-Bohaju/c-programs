/*
Nested structure
For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>



void main()
{
    struct date
    {
        int day;
        int month;
        int year;
    };

    struct student
    {
        char name[20];
        int rollno;
        float marks;
        struct date dateOfBirth;
    };

    struct student st;
    struct date d;

    
    printf("\nEnter information of student\n");
    printf("Enter name: ");
    scanf("%s",st.name);
    printf("Enter roll no: ");
    scanf("%d", &st.rollno);
    printf("Enter maeks: ");
    scanf("%f", &st.marks);
    printf("Enter day: ");
    scanf("%d", &st.dateOfBirth.day);
    printf("Enter month: ");
    scanf("%d", &st.dateOfBirth.month);
    printf("Enter year: ");
    scanf("%d", &st.dateOfBirth.year);
    

    printf("\nDetail Information of Students\n");
    printf("Name\t\t\tRoll No\t\t\tMarks\t\tDate of Birth");
    printf("\n____________________________________________________________________________________________\n");
   
    printf("%s\t\t\t%d\t\t\t%.2f\t\t%d-%d-%d", st.name, st.rollno, st.marks, st.dateOfBirth.day, st.dateOfBirth.month, st.dateOfBirth.year);

    printf("\n\nAccessing day, month and year from date structure variable\n");
    printf("Day : %d", st.dateOfBirth.day);
    printf("\nMonth : %d", st.dateOfBirth.month);
    printf("\nYear : %d", st.dateOfBirth.year);

    
    system("pause");
}

