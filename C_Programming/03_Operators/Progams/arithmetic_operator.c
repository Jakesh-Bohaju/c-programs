/*
Author : Jakesh Bohaju

Implementation of arithmetic

What are C Arithmetic Operators?
The C arithmetic operators are the symbols that are used to perform mathematical operations on operands. There are a total of 9 arithmetic operators in C to provide the basic arithmetic operations such as addition, subtraction, multiplication, etc.

Types of Arithmetic Operators in C
The C Arithmetic Operators are of two types based on the number of operands they work. These are as follows:

Binary Arithmetic Operators
Unary Arithmetic Operators
1. Binary Arithmetic Operators in C
The C binary arithmetic operators operate or work on two operands. C provides 5 Binary Arithmetic Operators for performing arithmetic functions which are as follows:

Operator    Name of the Operator	Arithmetic Operation                                                                Syntax
+           Addition                Add two operands.	                                                                 x + y
–           Subtraction             Subtract the second operand from the first operand.	                                 x – y
*           Multiplication          Multiply two operands.	                                                             x * y
/           Division                Divide the first operand by the second operand.	                                     x / y
%           Modulus                 Calculate the remainder when the first operand is divided by the second operand.	 x % y

2. Unary Arithmetic Operators in C
The unary arithmetic operators operate or work with a single operand. In C, we have two unary arithmetic operators which are as follows:

Operator	          Symbol	Operation	                                                Implementation
Decrement Operator	    —       Decreases the integer value of the variable by one. 	    –h or h–
Increment Operator	    ++      Increases the integer value of the variable by one.	        ++h or h++
Unary Plus Operator	    +       Returns the value of its operand.                       	+h
Unary Minus Operator	–       Returns the negative of the value of its operand.	        -h

For more visit : https://github.com/Jakesh-Bohaju/c-programs.git

*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a = 6, b = 2;

    printf("Addition => a + b : %d\n", a + b);
    printf("Subtraction => a - b : %d\n", a - b);
    printf("Multiplication => a * b : %d\n", a * b);
    printf("Division => a / b : %d\n", a / b);
    printf("Modulus => a % b : %d\n", a % b);

    system("pause");
}