/*

Writing structure data into file

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

/*

Implementation of structure and write to file 

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    struct student
    {
        char name[30];
        int roll;
        float marks;
    };
    struct student s[3];
    int i;
    FILE *fp;

    fp = fopen("student.txt", "w");
    if(fp == NULL)
    {
        printf("File cannot be created...");
        exit(1);
    }

    for(i = 0; i < 3; i++)
    {
        printf("\nEnter information of student no %d\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll No.: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);

        fprintf(fp, "%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    fclose(fp);  // Close the file after writing

    fp = fopen("student.txt", "r");
    if(fp == NULL)
    {
        printf("Error opening file for reading...");
        exit(1);
    }

    struct student st;
    printf("\nReading student information from file...\n");
    printf("Name\t\tRoll\t\tMarks\n");
    printf("--------------------------------------\n");
    while(fscanf(fp, "%s %d %f", st.name, &st.roll, &st.marks) != EOF)
    {
        printf("%s\t\t%d\t\t%.2f\n", st.name, st.roll, st.marks);
    }

    fclose(fp);  // Close the file after reading
    return 0;
}







