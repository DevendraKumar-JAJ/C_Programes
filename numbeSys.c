#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int Num_1,Rem_1,Binary=0,Decimal,J=0,POW,Case;

    printf("\nEnter [ 1_for D to B. 2_for D to B. 3_for D to HD. 4_for HD to D ]");
    scanf("%d",&Case);

    switch (Case)
    {
    case 1://For Decimal to Binary.... 
        printf("\nEnter any Decimal Number :\t");
        scanf("%d",&Num_1);

        while (Num_1>0)
        {
            Rem_1=Num_1%2;
            Binary=(Binary*10)+Rem_1;
            Num_1/2;
        }
        printf("\nThe Binary no. of %d is %d.",Num_1,Binary);
    
            break;
    
    case 2://For Binary to Decimal...
        printf("\nEnter any Binary Number :\t");
        scanf("%d",&Num_1);

        while (Num_1)
        {
            Rem_1=Num_1%10;
            POW=pow(2,J);
            Decimal=Rem_1*POW;
            Num_1/10;
            J++;
        }
        printf("\nThe Decimal No. of %d is %d.",Num_1,Decimal);
            break;

    case 3://For Decimal to Hexadecimal
        printf("\nEnter any Decimal Number :\t");
        scanf("%d",&Num_1);

    default:printf("\nWrong input");
        break;
    }

    return 0;
}