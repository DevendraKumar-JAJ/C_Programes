#include<stdio.h>
#include<stdio.h>

void main()
{
    int i=1,j[1000],max=0,MA_1,k=0,a,r;
    printf("\nHow many no./s you want compare\t");
    scanf("%d",&a);
    for ( i; i <=a; i++)
    {
        printf("Enter %d's student marks\t",i);
        scanf("%d",&j[k]);
        if (max<=j[k])
        {
            max=j[k];
            r=k+1;
        }
        else
        {
            max=max;
            
        }
        k++;
    }
    

    printf("\a\nMaxmium no in class is = %d, Student no %d.",max,r);
}