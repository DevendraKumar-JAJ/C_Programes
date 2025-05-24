#include<stdio.h>
#include<conio.h>

void main()
{
    int DD_B,MM_B,YYYY_B,DD_P,MM_P,YYYY_P;
    printf("\nEnter Date when you birth  [DD]:\n");
    scanf("%d",&DD_B);
    printf("\nEnter present Date         [DD]:\n");
    scanf("%d",&DD_P);
    printf("\nEnter Month when you birth [MM] :\n");
    scanf("%d",&MM_B);
    printf("\nEnter present month        [MM]:\n");
    scanf("%d",&MM_P);
    printf("\nEnter Year when you birt [YYYY] :\n");
    scanf("%d",&YYYY_B);
    printf("\nEnter present year       [YYYY] :\n");
    scanf("%d",&YYYY_P);

    int ageDD;
    if (DD_P<DD_B)
        {
        if (MM_P==1||MM_P==3||MM_P==5||MM_P==7||MM_P==8||MM_P==10||MM_P==12)
            {
                ageDD=(31+DD_P)-DD_B;
            }
        else if (MM_P==2&&YYYY_P%4==0)
            {
                ageDD=(29+DD_P)-DD_B;
            }
    else if (MM_P==2&&YYYY_P%4!=0)
            {
                ageDD=(28+DD_P)-DD_B;
            }
    else
            {   
                ageDD=(30+DD_P)-DD_B;
            }
    }
    
    else
    {
        ageDD=DD_P-DD_B;
    }
    
    int ageMM;
    if (ageDD==((31+DD_P)-DD_B)||ageDD==(29+DD_P)-DD_B||ageDD==(28+DD_P)-DD_B||ageDD==(30+DD_P)-DD_B)
    {
        if (MM_P<=MM_B)
        {
            ageMM=(11+MM_P)-MM_B;
        }
        else
        {
            ageMM=MM_P-(MM_B+1);
        }
        
    }
    else if(MM_P<MM_B)
    {
        ageMM=(12+MM_P)-MM_B;
    }
    else
    {
        ageMM=MM_P-MM_B;
    }
    
    int ageYYYY;
    if (ageMM==(11+MM_P)-MM_B||ageMM==MM_P-(MM_B+1)||ageMM==(12+MM_P)-MM_B)
    {
        ageYYYY=YYYY_P-(1+YYYY_B);
    }
    else
    {
        ageYYYY=YYYY_P-YYYY_B;
    }

    printf("\nYou are %d years ,%d months and %d days older.",ageYYYY,ageMM,ageDD);
}