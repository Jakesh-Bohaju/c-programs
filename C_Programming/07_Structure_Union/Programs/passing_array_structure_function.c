/*
Passing array of structure to a function
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

void dispaly(struct student stf[])
{
   printf("\nDetail Information of Students\n");
    printf("Name\t\t\tRoll No\t\t\tMarks");
    printf("\n_______________________________________________________\n");
    for(int j=0; j<5; j++)
    {
        printf("%s\t\t%d\t\t%.2f\n", stf[j].name, stf[j].rollno, stf[j].marks);
    }
}

void main()
{   
    struct student st[5];

    for(int i=0; i<5; i++)
    {
        printf("\nEnter information of student no %d\n", i+1);
        printf("Enter name: ");
        scanf("%s",st[i].name);
        printf("Enter roll no: ");
        scanf("%d", &st[i].rollno);
        printf("Enter maeks: ");
        scanf("%f", &st[i].marks);
    }
    
    dispaly(st);

    
    system("pause");
}

