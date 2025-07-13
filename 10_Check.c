#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int Num,N,P;
    N=Num<0;
    P=Num>0;


    printf("\nEnter Your Year No. :\t");
    scanf("%d",&Num);

    if (Num%2==0)
    {
        printf("\nYour No %d is  Even.",Num);
    }else if (Num%2==1)
    {
        printf("\nYour No %d is  Odd.",Num);
    
    }else {printf("......");}
    
    
    if(Num>=0)
    {
        printf("\n Your No %d is  Positive.",Num);
    }else if(Num<=0)
    {
        printf("\nYour No %d is  Negetive.",Num);
    }else {

        printf("Wrong Input");
    }


    if (Num<0)
    {
        printf("\n This Is Leap Year");

    }else{
        printf("\nThis is No a Leap year");
    }
    
    return 0;
}