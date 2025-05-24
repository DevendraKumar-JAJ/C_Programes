#include<stdio.h>
#include<conio.h>

void main()
{
    int YYYY,MM,DD;
    xyz:
    printf("\nEnter Date which name you want:[DD    MM  YYYY]\n");
    
    for ( int i = 0; i < 1; i++)
    {
        scanf("%d\t%d\t%d",&DD,&MM,&YYYY);
        if (DD>31)
        {
            goto xyz;
        }
        else if (MM>12)
        {
            goto xyz;
        }
        else if (YYYY<0)
        {
            goto xyz;
        }
    }
    printf("\nYou Entered %d_%d_%d ",DD,MM,YYYY);
    int sum=0;
    for (int i = 1; i<YYYY; i++)
    {
        if (i%4==0)
        {
            if (i%100==0)
                {
                    if (i%400==0)
                        {
                            sum=sum+366;
                        }
                    else
                        {
                            sum=sum+365;
                        }
                }
            else
                {
                    sum=sum+366;
                }
            
        }
        else
        {
        sum=sum+365;
        }
        
    }
    
    
    for (int k = MM; k>1; k--)
    {
        if (k==1||k==3||k==5||k==7||k==8||k==10||k==12)
        {
            sum=sum+31;
        }
        else if (k==2&&YYYY%4==0)
        {
            sum=sum+28;
        }
        else if (k==2&&YYYY%4!=0)
        {
            sum=sum+28;
        }
        else
        {
            sum=sum+30;
        }
    }
    sum=sum+DD;
    printf("\n%d",sum);
}