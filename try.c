#include<stdio.h>
#include<conio.h>

void main(){
    int A,B;
    printf("\nEnter any two no. :\t");
    scanf("%d%d",&A,&B);
    if (A>B)
    {
        printf("%d>%d",A,B);
    }else{
        if (B>A)
        {
            printf("%d<%d",A,B);
        }
        else{
            if (A=B)
            {
                printf("%d=%d",A,B);
            }
            else{
                printf("%d!=%d",A,B);
            }
            
        }
    }
    
    
}