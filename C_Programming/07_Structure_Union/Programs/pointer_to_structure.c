/*

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>



void main()
{
    struct student
    {
        char name[20];
        int rollno;
        float marks;
    };

    struct student st, *stptr;
    
    printf("\nEnter information of student\n");
    printf("Enter name: ");
    scanf("%s",st.name);
    printf("Enter roll no: ");
    scanf("%d", &st.rollno);
    printf("Enter maeks: ");
    scanf("%f", &st.marks);
    
    stptr = &st;

    printf("\n\nAccessing Student information using arrow operator\n");
    printf("Name\t\t\tRoll No\t\t\tMarks");
    printf("\n_________________________________________________________________________\n");
    printf("%s\t\t\t%d\t\t\t%.2f", stptr->name, stptr->rollno, stptr->marks);

    printf("\n\nAccessing Student information using * operator\n");
    printf("Name\t\t\tRoll No\t\t\tMarks");
    printf("\n_________________________________________________________________________\n");
    printf("%s\t\t\t%d\t\t\t%.2f", (*stptr).name, (*stptr).rollno, (*stptr).marks);
    
    system("pause");
}

