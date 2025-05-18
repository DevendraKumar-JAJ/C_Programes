//Write a C program to calculate the factorial of a given number.

/*Factorial Calculator 📝

A simple C program to calculate the factorial of a given number.

What is Factorial? 🤔
The factorial of a non-negative integer n is the product of all positive integers less than or equal to n. It's denoted by n!.

How to Use 📄
1. Compile the program using a C compiler (e.g., GCC).
2. Run the program.
3. Enter a number when prompted.
4. The program will display the factorial of the entered number.

Example 🤩
- Input: 5
- Output: 120 (because 5! = 5 × 4 × 3 × 2 × 1 = 120)

Code Explanation 💻
The program uses a simple for loop to calculate the factorial of the entered number. The result is stored in the Num1 variable and displayed at the end.

Author 👨‍💻
Devendra Kumar
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int i,Num,Num1=1;
    printf("\nEnetr number : \t");
    scanf("%d",&Num);

for ( i = 1; i<=Num; i++)
    {
        Num1=Num1*i;
    }
    printf("\n%d",Num1);
    
}

