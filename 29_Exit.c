#include<stdio.h>
#include<conio.h>
int main()
{
    int A,B;
    fine:
    printf("\nEnter any two digits\t");
    scanf("%d%d",&A,&B);

    if (A<=B)
    {
        goto RAM;
    }
    else
    {
        goto fine;
    }
    RAM:
    return 0;
}

// We can create Break; continue; exit; through goto statement.....
