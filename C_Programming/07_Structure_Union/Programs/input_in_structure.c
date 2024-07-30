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

    struct student st;

    printf("Enter name: ");
    scanf("%s",st.name);
    printf("Enter roll no: ");
    scanf("%d", &st.rollno);
    printf("Enter maeks: ");
    scanf("%f", &st.marks);

    printf("\nAccessing member of structure from structure variable.\n");
    printf("name : %s\n",st.name);
    printf("name : %d\n",st.rollno);
    printf("name : %.2f\n",st.marks);

    system("pause");
}

