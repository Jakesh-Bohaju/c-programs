/*
passing entire structure to a function
For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

struct student
    {
        char name[20];
        int rollno;
        float marks;
    };

void dispaly(struct student stf)
{
    printf("\nDetail Information of Students\n");
    printf("Name\t\t\tRoll No\t\t\tMarks");
    printf("\n______________________________________________________________________\n");
   
    printf("%s\t\t\t%d\t\t\t%.2f", stf.name, stf.rollno, stf.marks);
}

void main()
{   
    struct student st;
    
    printf("\nEnter information of student\n");
    printf("Enter name: ");
    scanf("%s",st.name);
    printf("Enter roll no: ");
    scanf("%d", &st.rollno);
    printf("Enter maeks: ");
    scanf("%f", &st.marks);
    
    dispaly(st);

    
    system("pause");
}

