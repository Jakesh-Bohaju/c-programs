/*
Union implementation
For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

void main()
{   
    union student
    {
        int roll;
        float marks;
    };

    union student st;
    st.roll = 12;
    printf("\nRoll no: %d", st.roll);
    st.marks = 89.5;
    printf("\nMarks: %.2f", st.marks);    


    st.roll = 8;
    st.marks = 60.5;
    printf("\nRoll no: %d", st.roll);
    printf("\nMarks: %.2f", st.marks);  

    
    system("pause");
}

