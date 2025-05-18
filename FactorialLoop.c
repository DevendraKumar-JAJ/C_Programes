//Write a C program to calculate the factorial of a given number.

/*Factorial Calculator 📝

A simple C program to calculate the factorial of a given number.

What is Factorial? 🤔
The factorial of a non-negative integer n is the product of all positive integers less than or equal to n. It's denoted by n!.

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

