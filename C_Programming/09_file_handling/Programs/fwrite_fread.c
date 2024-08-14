/*

Implementation of fwrite() and fread()

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
    struct student s[3], st[3];
    int i;
    FILE *fp;

    fp = fopen("student1.txt", "wb+");
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
    }
    printf("\nWriting information to file...\n");
    fwrite(s, sizeof(struct student), 3, fp);

    // Rewind the file pointer to the beginning for reading
    rewind(fp);

    printf("\nReading student information from file...\n");
    fread(st, sizeof(struct student), 3, fp);

    printf("Name\t\tRoll\t\tMarks\n");
    printf("--------------------------------------\n");
    for(i = 0; i < 3; i++)
    {
        printf("%s\t\t%d\t\t%.2f\n", st[i].name, st[i].roll, st[i].marks);
    }

    // Close the file
    fclose(fp);
    return 0;
}



