#include<stdio.h>
#include<conio.h>
int Dev(int Base,int Exponent);

void main()
{
    int Base,Exponent,Power;
    printf("\nEnter value of Base. :\t");
    scanf("%d",&Base);
    printf("\nEnter value of Exponent. :\t");
    scanf("%d",&Exponent);
    Power= Dev( Base,Exponent);
    printf("\nValue of %d to the power %d is %d",Base,Exponent,Power);

}
int Dev(int Base,int Exponent)
{

if (Exponent==0)
{
    return 1;
}

    return Base*Dev(Base,Exponent-1);
}