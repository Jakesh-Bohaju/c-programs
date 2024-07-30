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

    struct student st2 = {"John", 25, 89.90};

    printf("Accessing member of structure from structure variable.\n");
    printf("name : %s\n",st2.name);
    printf("name : %d\n",st2.rollno);
    printf("name : %.2f\n",st2.marks);

    system("pause");
}

