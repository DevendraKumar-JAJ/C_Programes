/*
Q1_Counting 1_10.
Q2_Counting 10_1.
Q3_Counting 1 _last no..
Q4_Counting startin_last no..
Q5_Counting Natural_Given no.

*/

#include<stdio.h>
#include<conio.h>

void main(){

    int Num_1,Num_2,Case,i,j,k,l=1;
    printf("\nCounting 1 to 10.");

    for ( i = 1; i <=10; i++)
    {
        printf("\n%d",i);
    }
    printf("\nCounting 10 to 1.");

    for ( j=10; j>= 1; j--)
    {
        printf("\n%d",j);
    }
    printf("\nEnetr Case [ 1_for counting 1 to your no. \n2_for counting from your starting no. to you ending no. \n3_for counting Natural no. to your given no. ] :\t");
    scanf("%d",&Case);

    switch (Case)
    {
    case 1:
        printf("\nEnter your no. :\t");
        scanf("%d",&Num_1);
        printf("\nCounting 1 to %d.",Num_1);
        for ( k= 1; k<=Num_1; k++)
        {
            printf("\n%d",k);
        }
        
        break;

    case 2:
        printf("\nEnter your no.s [ first<second ] :\t");
        scanf("%d%d",&Num_1,&Num_2);
        printf("\nCounting form %d to %d.",Num_1,Num_2);
        while (Num_1<=Num_2)
        {
            printf("\n%d",Num_1);
            Num_1++;
        }
        
        break;

    case 3:
        printf("\nEnter your no. :\t");
        scanf("%d",&Num_1);
        printf("\nCounting 1 to %d.",Num_1);
        while (l<=Num_1)
        {
            printf("\n%d",l);
            l++;
        }
        break;

    
    
    default:printf("\nPlease try again.");
        break;
    }
    
}