#include<stdio.h>
#include<conio.h>

void main(){
    char Name[30];
    int Times,i,j;
    printf("\nEnter what you want to print. [ upto 30 Letter ] :\t");
    fgets(Name,sizeof(Name),stdin);

    printf("Enter How many Times print. :\t");
    scanf("%d",&Times);

    for (i=1; i<=Times; i++)
    {
        
            printf("\n\t%s",Name);
        
    }
    
}