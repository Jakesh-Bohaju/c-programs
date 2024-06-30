/*
Author : Jakesh Bohaju

3X3 Matrix addition

note: you can do similar for matrix subtraction....

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int first_matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        second_matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9},
        result_matrix[3][3],
        choice, i, j;
    matrix:
    printf("What you want to do. Enter Choice.\n1. Default Matrix Addition\n2. User Defined Matrix Addition\n3. Exit\nChoice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        //Matrix Addition
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                result_matrix[i][j] = first_matrix[i][j] + second_matrix[i][j];
            }
        }
        printf("The resultant matrix is \n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d\t",result_matrix[i][j]);
            }
            printf("\n");
        }
        break;

    case 2:
        printf("\nEnter elements for first matrix\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                scanf("%d",&first_matrix[i][j]);
            }
        }
        printf("\nEnter elements for second matrix\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                scanf("%d",&second_matrix[i][j]);
            }
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                result_matrix[i][j] = first_matrix[i][j] + second_matrix[i][j];
            }
        }
        printf("The resultant matrix is \n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d\t",result_matrix[i][j]);
            }
            printf("\n");
        }
        break;

    case 3:
        printf("Thanks for using our services...\n");
        exit(0);

    default:
        printf("Invalid Choice!!!");
        break;
    }
    printf("\n-------------------------------------\n\n");
    goto matrix;

    system("pause");
}