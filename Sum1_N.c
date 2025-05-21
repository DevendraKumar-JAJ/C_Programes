#include<stdio.h>
#include<conio.h>

void Dev(int x,int y);
void main()
{
    int Num,A=0;
    printf("\nSum upto : ");
    scanf("%d",&Num);
    Dev(Num,A);

}
void Dev(int Num,int A)
{

    if (Num==0) 
    {
    printf("%d",A);
    return ;
    }
    Dev(Num-1,A+=Num);
    return ;
}