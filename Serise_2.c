// Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,Term,j,sum_1=0,sum=0,sum_2;
    int Num;
    printf("\nEnter no of term.\t");
    scanf("%d",&Term);
    printf("\nEnetr value of y [ y+yy+yyy+...].");
    scanf("%d",&Num);

    for ( i=1; i<=Term; i++)
    {
        for ( j=1; j<=i; j++)
        {
            sum=(sum*10)+Num;
        }
        printf("\n%d+",sum);
        sum_1=sum_1+sum;
    }
    printf("\n=%d",sum_1);
}


// test :  terms = 5   n=4