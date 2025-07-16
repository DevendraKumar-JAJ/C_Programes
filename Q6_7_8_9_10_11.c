/*
Q6_Sum of 1 to 10.
Q7_Sum of  1 to given no.
Q8_Sum of Starting to end no. given by user.
Q9_Table of given no.
Q10_Even no. 2 to given no.
Q11_Odd no. 1 to given no. 
*/
#include"stdio.h"
#include"conio.h"

void main(){
    int Num_1,Num_2,i,j,k,l,sum=0,sum_1=0,Case;

    printf("\nSum of no. 1_10.");
for ( i = 1; i <=10; i++)
    {
        sum=sum+i;
    }
    printf(":%d",sum);
    printf("\nEnter [ \n1_for Sum of 1 to your no. \n2_for sum of yor given starting no. to end no.. \n3_Table of given no. \n4_for find even b/w your given numbers. \n5_for find odd b/w you given numbers.\n]\t\t:\t");
    scanf("%d",&Case);

    switch (Case)
    {
    case 1:
        printf("\nEnter your no.:\t");
        scanf("%d",&Num_1);
        for ( j = 1; j<=Num_1; j++)
        {
            sum_1=sum_1+j;
        }
        printf("\nSum =%d.",sum_1);
        
        break;

    case 2:
        printf("\nEnter your no./s:\n");
        scanf("%d%d",&Num_1,&Num_2);
        if (Num_1<Num_2)
        {
            for ( Num_1; Num_1<Num_2; Num_1++)
        {
            sum_1=sum_1+Num_1;
        }
        printf("\nSum is=%d.",sum_1);
        }
        else{
            for ( Num_2; Num_2<Num_1; Num_2++)
        {
            sum_1=sum_1+Num_2;
        }
        printf("\nSum of %d to %d.",Num_1,Num_2,sum_1);
        }
        
        
        break;

    case 3:
        printf("\nEnter your no.:\t");
        scanf("%d",&Num_1);
        for ( j=1; j<=10; j++)
        {
            printf("\n %d*%d=%d.",Num_1,j,j*Num_1);
        }
        
        
        break;

    case 4:
        printf("\nEnter your no.:\t");
        scanf("%d",&Num_1);
        printf("\nEven no.s b/w 0 to %d.",Num_1);
        if ((Num_1%2)!=0)
        {
            Num_1=Num_1-1;
        }
        for ( l =0; l<= Num_1; l=l+2)
        {
            printf("\n%d",l);
        }
        break;

    case 5:
        printf("\nEnter your no.:\t");
        scanf("%d",&Num_1);
        printf("\nOdd no.s b/w 1 to %d.",Num_1);
        if ((Num_1%2)==0)
        {
            Num_1=Num_1-1;
        }

        for ( l=1; l<= Num_1; l=l+2)
        {
            printf("\n%d",l);
        }
        
        break;
    
    default:printf("\nTry again.");
        break;
    }



}