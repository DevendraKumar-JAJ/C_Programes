#include<stdio.h>
#include<conio.h>

void Dev(int x,int y,int z);
void main()
{
    int Num,A,z;
    printf("\nEnter No.");
    scanf("%d",&Num);
    A=Num*10;
    z=Num;
    Dev(Num,A,z);

}
void Dev(int Num,int A,int z)
{
    if (Num>A) return ;
    printf("\n%d",Num);
    Dev(Num+z,A,z);
    
    return ;
}