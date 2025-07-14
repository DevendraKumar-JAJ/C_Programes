#include<stdio.h>
#include<conio.h>

void main(){

    

    int a;
    printf("\nEnter No. of Days (late).:\t");
    scanf("%d",&a);


    if (a<=5&&a>=0)
    {
        printf("\nTotal fine = %d",a*50);
    }else if (a<=10&&a>=6)
    {
        printf("\nTotal fine = %d",a*100);

    }else if (a>=11)
    {
        printf("\nTotal fine = %d",a*150);
    }else{
        printf("\nWrong Input");
    }


}
