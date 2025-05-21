#include<stdio.h>
#include<conio.h>

void dec(int x);
void main()
{
    int Num;
    printf("\nEnter Starting No.");
    scanf("%d",&Num);
    dec(Num);

}
void dec(int Num)
{
    if (Num==0)
    {
        return ;
    }
    
    printf("\n%d",Num);
    dec(Num-1);
    return ;
}