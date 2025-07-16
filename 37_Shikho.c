#include<stdio.h>
#include<conio.h>

void main()
{
    // WAP to print name of number in word...
    int Num,Sum=0,i,j=1,Num_1,Num_2=0;
    printf("\nEnter any number.\t");
    scanf("%d",&Num);

    for ( Num; Num>0; Num=Num/10)
    {
        Num_1=Num%10;
        Num_2=(Num_2*10)+Num_1;
        j++;
        
    }
    //printf("%d",Num_2);

    for ( Num_2; Num_2>0; Num_2=Num_2/10)
    {
        i=Num_2%10;
        switch (i)
        {
        case 1:
            printf(" One");
            break;

        case 2:
                printf(" Two");
                break;
    
        case 3:
                printf(" Three");
                break;
            
        case 4:
                printf(" Four");
                break;
    
        case 5:
                printf(" Five");
                break;

        case 6:
                printf(" Six");
                break;

            case 7:
                printf(" Seven");
                break;

            case 8:
                printf(" Eight");
                break;

            case 9:
                printf(" Nine");
                break;
            
        default:printf("Sorry");
            break;
        }
        switch (j)
        {
        case 1 :
            
            break;
        
        default:
            break;
        }
        j++;

    }
    
    

    getch();
}