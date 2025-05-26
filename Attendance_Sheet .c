                                                                       //...ATTENDANCE SHEET... 

/*

Devendra Kumar 19(B)...
25_04_*24

*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num_Sut=0;
    Clear:
    //Ask No. of  Student...
    printf("\nEnter Number of Students...");
    scanf("%d",&Num_Sut);

    //Array for Students...
    char Roll[Num_Sut];

    // Take attendance...
    for (int i = 0; i < Num_Sut; i++)
    {
        Again:
        printf("\nRoll %d [A/P]...\t",i+1);
        Roll[i]=getche();
        // Checke Input formate...[A/a for absent and P/p for present..]
        if (Roll[i]=='p'||Roll[i]=='P'||Roll[i]=='a'||Roll[i]=='A')
        {
            Roll[i]=Roll[i];
        }
        else
        {
            // if format is wrong then ask again....
            printf("\nPlease Enter valid data [P/A]..\t");
            goto Again;
        }
    }
    char Edit;
    Check_1:
    // You want to edit attendance sheet after completing attendance...
    printf("\nEdit [Y/N]...\t");
    Edit=getche();

    int Roll_Num;

    //Check you want to edit or not...
    if (Edit=='Y'||Edit=='y')
    {

        //Yes ...
        printf("\nEnter Roll..\t");
        scanf("%d",&Roll_Num);
        printf("Roll %d [A/P]...\t",Roll_Num);
        Roll[Roll_Num-1]=getche();

        goto Check_1;
    }
    else if (Edit=='N'||Edit=='n')
    {
        // No...
        for (int j = 0; j < Num_Sut; j++)
        {
            // For print Character in Upper case...
            if(Roll[j]=='a'||Roll[j]=='p')
            {
                printf("\nRoll %d  = %c",j+1,Roll[j]-32);
            }
            else
            {
            printf("\nRoll %d  = %c",j+1,Roll[j]);
            }
        }
    }
    else
    {
        // Wrong format...
        printf("\nPlease Enter valid data [Y/N]..\t");
        goto Check_1;
    }
    char CS;
    CLR_SUB:
    Again_2:
    printf("\nClear/Submit[C/S]...\t");
    CS=getche();
    if (CS=='C'||CS=='c')
    {
        Again_3:
        printf("\nAre you really...[Y/N]\t");
        CS=getche();
        if (CS=='Y'||CS=='y')
        {
            goto Clear;
        }
        else if (CS=='n'||CS=='N')
        {
            goto CLR_SUB;
        }
        else
        {
            printf("\nPlease Enter valid data [Y/N]..\t");
            goto Again_3;
        }
    }
    else if (CS=='S'||CS=='s')
    {
        goto Comp;
    }
    else
    {
        printf("\nPlease Enter valid data [Y/N]..\t");
        goto Again_2;
    }

    Comp:
    return 0;
}