#include<stdio.h>
#include<conio.h>

void main()
{
    int i,Num;
    printf("\nEnter a no.\t");
    scanf("%d",&Num);

    i=2;
    while (i<=Num-1)
    {
        if (Num%i==0)
        {
            printf("\n%d is not a prime no.",Num);
            break;
        }
        i++;
        
    }
    if (i==Num)
    {
        printf("\n%d is a prime no.",Num);
    }
    
}