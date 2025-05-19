/*Recursive Number Printer

A C program that prints numbers from a given starting number down to 1 using recursion.

Features

- Takes a starting number as input from the user
- Uses a recursive function to print numbers from the starting number down to 0
- Demonstrates the use of recursion in C programming

Code

The code uses a simple recursive function Dev() to print numbers from the starting number down to 0.

Usage

1. Compile the program using a C compiler (e.g., GCC)
2. Run the program
3. Enter a starting number when prompted
4. The program will print numbers from the starting number down to 0

Example Output


Enter Starting No. 5
5
4
3
2
1
*/



#include<stdio.h>
#include<conio.h>

void Dev(int x);
void main()
{
    int Num,A=1;
    printf("\nEnter Starting No.");
    scanf("%d",&Num);
    Dev(Num);

}
void Dev(int Num)
{
    int A=1;
    if (Num==0) return ;
    printf("\n%d",Num);
    Dev(Num-1);
    
    return ;
}
