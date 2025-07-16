#include<stdio.h>
#include<conio.h>
#include<process.h>

void main()
{
    int Num,Times,Sum=0,Fs=1,Set;
    char A;
    printf("\nEnert what you want perform.\n[ 1_Add only positive no. 2_Add only -No./s. 3_to print Table.] :\t");
    scanf("%d",&Set);
    switch (Set)
    {
    case 1:
        printf("\nEnter how many no./s you Wants to preform. :\t");
        scanf("%d",&Times);

    while (Fs<=Times)
    {
        printf("\nEnter your %d no..:\t",Fs);
        scanf("%d",&Num);
        if (Num<0)
        {
            printf("\nPlease Enter only positive no.\n\n");
            continue;
        }
        else{
            Sum=Sum+Num;
            Fs++;
        }
    }
    printf("\nSum of Given +no./s is equal to %d\n\n",Sum);
    
        break;
    case 2:
    printf("\nEnter how many no./s you Wants to preform. :\t");
    scanf("%d",&Times);
    R:
    while (Fs<=Times)
    {
        printf("\nEnter your %d no..:\t",Fs);
        scanf("%d",&Num);
        if (Num>0)
        {
            printf("\nPlease Enter only Negetive no.\n\n");
            goto R;
        }
        else{
            Sum=Sum+Num;
            Fs++;
        }
    }
    printf("\nSum of Given -no./s is equal to %d\n\n",Sum);
        break;

    case 3:
    printf("\nEnter your no./s. :\t");
    scanf("%d",&Num);
    Next:
    if (Fs<=10)
    {
        printf("\n%d",Sum=Sum+Num);
        Fs++;
    }
    else{
        break;
    }
    goto Next;
        break;
    
    default:printf("\nWrong Input try again");
        break;
    }
    

}