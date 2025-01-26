# Integer Overflow Bug in C
This repository demonstrates a simple C program that exhibits integer overflow. The program attempts to assign a value that exceeds the maximum value representable by an integer data type, resulting in unexpected behavior. The solution shows a way to mitigate this kind of error, by performing check before incrementing or assigning value to avoid overflow.

## Description
The `bug.c` file contains a C program that initializes an integer variable and then assigns a value to it that exceeds the maximum integer value. This leads to an overflow, where the integer wraps around to a negative value. The `bugSolution.c` file shows a solution to handle this issue safely.