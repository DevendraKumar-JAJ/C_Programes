// Q1_Check two no. equal or not..
//Q15_Check two no. negetive ,positive,equal..
#include<stdio.h>
#include<conio.h>

void main(){
    int Num_1,Num_2,Case;
    printf("\nEnter Case 1_for compare two number. 2_to check Negetive Positive or Equal.\t");
    scanf("%d",&Case);

    switch (Case)
    {
    case 1://Q1
        printf("\nEnter any two Intergers.\n");
        scanf("%d%d",&Num_1,&Num_2);

        if (Num_1==Num_2)
        {
            printf("\nThese no. are equal.[ %d=%d ].",Num_1,Num_2);
        }else{
            printf("\nBoth no. are different.[ %d!=%d ].",Num_1,Num_2);
        }
        
        break;
    case 2://Q2
        printf("\nEnter any  Interger.\t");
        scanf("%d",&Num_1);

        if (Num_1<0)
        {
            printf("\nGiven No. is Negetive.[ %d ].",Num_1);
        }else if (Num_1>0)
        {
            printf("\nGiven No. is Positive.[ %d ].",Num_1);
        }else{
            printf("\nNo. Equal to Zero.[ %d=0 ].",Num_1);
        }
        
        break;
    
    default:printf("\nPlease try again [ 1 or 2 ].");
        break;
    }


}