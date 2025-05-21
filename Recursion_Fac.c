#include<stdio.h>
#include<conio.h>

int Recursion(int);
void main()
{
    int n,Recurion_Value;
    printf("\nEnter place value.:\t");
    scanf("%d",&n);
    Recurion_Value=Recursion(n);
    printf("\nFactorial of place value %d =%d.",n,Recurion_Value);
}
int Recursion(int x)
{
    if (x==1)
    {
        return 1;
    }
    
    return x*Recursion(x-1);
}