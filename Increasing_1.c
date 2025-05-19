/*
Recursive Number Printer

A C program that prints numbers from 1 to a given ending number using recursion.

Features

- Takes an ending number as input from the user
- Uses a recursive function to print numbers from 1 to the ending number
- Demonstrates the use of recursion in C programming

Code

The code uses a simple recursive function Dev() to print numbers from 1 to the ending number. The recursive calls are made before printing the numbers, which results in the numbers being printed in ascending order.

Usage

1. Compile the program using a C compiler (e.g., GCC)
2. Run the program
3. Enter an ending number when prompted
4. The program will print numbers from 1 to the ending number

Example Output


Enter Ending No. 5
1
2
3
4
5

*/


#include<stdio.h>
#include<conio.h>

void Dev(int x);
void main()
{
    int Num,A=1;
    printf("\nEnter Ending  No.");
    scanf("%d",&Num);
    Dev(Num);

}
void Dev(int Num)
{
    int A=1;
    if (Num==0) return ;
    Dev(Num-1);
    printf("\n%d",Num);
    return ;
}