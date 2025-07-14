#include<stdio.h>
#include<conio.h>

void main(){

    int Num,Rem,Sum=0;

    printf("Enter your Number :\t");
    scanf("%d",&Num);

    while (Num>0)
    {
        Rem=Num%10;
        Sum=0+Rem;
        Num/10;

    }

    printf("\nSum of given Digits = %d",Sum);
    getch();
    
}