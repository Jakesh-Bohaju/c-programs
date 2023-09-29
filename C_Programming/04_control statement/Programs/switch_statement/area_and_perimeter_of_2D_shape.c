/*
Author : Jakesh Bohaju

Find area and perimeter of 2D shape as per user choice.

Implement switch statemetn (decision making statement) with goto statement (jumpling statement)


*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

void main()
{
    int choice;
    float a, b, c, d;
    system("cls");
calculator:
    printf(".......................Welcome To Area/Perimeter Calculator.........................\n");
    printf("Enter choice below\n1. Area of 2D shape\n2. Perimeter of 2D shape\n3. Exit\nYour choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    area:
        printf("Enter the choice below to calculate area.\n");
        printf("1. Square\n2. Rectangle\n3. Right Angled Triangle\n4. Scalene Triangle\n5. Isosceles Triangle\n6. Equilateral Triangle\n7. Parallelogram\n8. Circle\n9. Trapezium\n10. Rhombus\n11. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter length in cm : ");
            scanf("%f", &a);
            d = pow(a, 2);
            printf("Area of square : %.3f sq. cm\n", d);
            goto calculator;

        case 2:
            printf("Enter length in cm : ");
            scanf("%f", &a);
            printf("Enter breadth in cm : ");
            scanf("%f", &b);
            d = a * b;
            printf("Area of rectangle : %.3f sq. cm\n", d);
            goto calculator;

        case 3:
            printf("Enter base in cm : ");
            scanf("%f", &a);
            printf("Enter height in cm : ");
            scanf("%f", &b);
            d = a * b / 2;
            printf("Area of right angled triangle : %.3f sq. cm\n", d);
            goto calculator;

        case 4:
            printf("Enter 1st side in cm : ");
            scanf("%f", &a);
            printf("Enter 2nd side in cm : ");
            scanf("%f", &b);
            printf("Enter 3rd side in cm : ");
            scanf("%f", &c);
            d = (a + b + c) / 2;
            d = sqrt(d * (d - a) * (d - b) * (d - c));
            printf("Area of scalene triangle : %.3f sq. cm\n", d);
            goto calculator;

        case 5:
            printf("Enter common side in cm : ");
            scanf("%f", &a);
            printf("Enter remaining side in cm : ");
            scanf("%f", &b);
            d = b * sqrt(4 * pow(a, 2) - pow(b, 2)) / 4;
            printf("Area of isosceles triangle : %.3f sq. cm\n", d);
            goto calculator;

        case 6:
            printf("Enter side in cm : ");
            scanf("%f", &a);
            d = sqrt(3) / 4 * pow(a, 2);
            printf("Area of equilateral triangle : %.3f sq. cm\n", d);
            goto calculator;

        case 7:
            printf("Enter base in cm : ");
            scanf("%f", &a);
            printf("Enter height in cm : ");
            scanf("%f", &b);
            d = a * b;
            printf("Area of parallelogram : %.3f sq. cm\n", d);
            goto calculator;

        case 8:
            printf("Enter radius in cm : ");
            scanf("%f", &a);
            d = PI * pow(a, 2);
            printf("Area of circle : %.3f sq. cm\n", d);
            goto calculator;

        case 9:
            printf("Enter short side of parallel line in cm : ");
            scanf("%f", &a);
            printf("Enter long side of parallel line in cm : ");
            scanf("%f", &b);
            printf("Enter height in cm : ");
            scanf("%f", &c);
            d = (a + b) / 2 * c;
            printf("Area of trapizium : %.3f sq. cm\n", d);
            goto calculator;

        case 10:
            printf("Enter 1st diagonal in cm : ");
            scanf("%f", &a);
            printf("Enter 1st diagonal in cm : ");
            scanf("%f", &b);
            d = a * b / 2;
            printf("Area of rhombus : %.3f sq. cm\n", d);
            goto calculator;

        case 11:
            printf("Thank you for using our calculator...\n");
            exit(0);

        default:
            printf("Sorry no choice found. Enter correct choice.\n\n");
            goto area;
        }

        break;

    case 2:
    perimeter:
        printf("Enter the choice below to calculate perimeter.\n");
        printf("1. Square\n2. Rectangle\n3. Triangle\n4. Parallelogram\n5. Circle\n6. Trapezium\n7. Rhombus\n8.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter length in cm : ");
            scanf("%f", &a);
            d = 4 * a;
            printf("Perimeter of square : %.3f sq. cm\n", d);
            goto calculator;

        case 2:
            printf("Enter length in cm : ");
            scanf("%f", &a);
            printf("Enter breadth in cm : ");
            scanf("%f", &b);
            d = 2 * (a + b);
            printf("Perimeter of rectangle : %.3f sq. cm\n", d);
            goto calculator;

        case 3:
            printf("Enter 1st side in cm : ");
            scanf("%f", &a);
            printf("Enter 2nd side in cm : ");
            scanf("%f", &b);
            printf("Enter 3rd side in cm : ");
            scanf("%f", &c);
            d = a + b + c;
            printf("Perimeter of triangle : %.3f sq. cm\n", d);
            goto calculator;

        case 4:
            printf("Enter length in cm : ");
            scanf("%f", &a);
            printf("Enter breadth in cm : ");
            scanf("%f", &b);
            d = 2 * (a + b);
            printf("Perimeter of parallelogram : %.3f sq. cm\n", d);
            goto calculator;

        case 5:
            printf("Enter radius in cm : ");
            scanf("%f", &a);
            d = 2 * PI * a;
            printf("Perimeter of circle : %.3f sq. cm\n", d);
            goto calculator;

        case 6:
            printf("Enter 1st side in cm : ");
            scanf("%f", &a);
            printf("Enter 2nd side in cm : ");
            scanf("%f", &b);
            printf("Enter 3rd side in cm : ");
            scanf("%f", &c);
            printf("Enter 4th side in cm : ");
            scanf("%f", &d);
            d = a + b + c +d;
            printf("Perimeter of trapizium : %.3f sq. cm\n", d);
            goto calculator;

        case 7:
            printf("Enter length in cm : ");
            scanf("%f", &a);
            d = 4 * a;
            printf("Perimeter of rhombus : %.3f sq. cm\n", d);
            goto calculator;

        case 8:
            printf("Thank you for using our calculator...\n");
            exit(0);

        default:
            printf("Sorry no choice found. Enter correct choice.\n\n");
            goto perimeter;
        }
        break;

    case 3:
        printf("Thank you for using our calculator...\n");
        exit(0);

    default:
        printf("Sorry no choice found. Enter correct choice.\n\n");
        goto calculator;
    }
    goto calculator;

    system("pause");
}