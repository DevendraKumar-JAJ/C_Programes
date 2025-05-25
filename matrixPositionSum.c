#include<stdio.h>
#include<conio.h>

void main()
{
    int i,c,sum;
    for ( i = 1; i <=5; i++)
    {
        for ( c = 1; c<=5; c++)
        {
            sum=i+c;
            printf("\ni=%d c=%d sum=%d",i,c,sum);
        }
        
    }
    
}