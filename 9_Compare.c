#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
//For Compare Two No./s.....
    float Max,Min;
    char B;
    char A;
    int Case;

    printf("Enter Input Type__[ 1_Number.  2_Characters ] :\t");
    scanf("%d",&Case);


    switch (Case)
    {
    case 1://For no./s.....
    printf("\nEnter Two No./s which you want to compare__:\n");
    scanf("%f%f",&Max,&Min);
    if (Max>Min)
    {
        printf("\nHere %f is Grater than %f _ [ %f > %f ]. ",Max ,Min ,Max ,Min);
    }else if (Max<Min)
    {
        printf("\nHere %f is less than %f _ [ %f < %f]",Max,Min,Max,Min);
    }else if (Max==Min)
    {
        printf("\nHere Both are Equale [ %f = %f ].",Max ,Min);
    }else {
        printf("\n Wrong input ( %d ,%d )use Case_2 [ if Input is Char./s ].. ",Max,Min);
    }
        break;

    case 2://For Char./s...
    printf("\nEnter Character_1 which you want to compare__:\t");
    scanf("%c",&A);
    printf("\nEnter Character_1 which you want to compare__:\t");
    scanf("%c",&A);
    printf("\nEnter Character_2 which you want to compare__:\t");
    scanf("%c",&B);
    printf("\nEnter Character_2 which you want to compare__:\t");
    scanf("%c",&B);

    if(A>B)
    {
        printf("\nHere %c is Grater than %c technically_ [ %c > %c ]. ",A ,B ,A ,B);
    }else if(A<B)
    {
        printf("\nHere %c is Grater than %c _ [ %c > %c]",B ,A ,B ,A);
    }else if (B==A)
    {
        printf("\nHere Both are Equale [ %c = %c ].",B,A);
    }else {
        printf("\n Wrong input use Case_1 [ if Input is No./s ].. ");
    } 
        break;
    
    default:printf("\n Wrong input try again..[ %d ].. ",Case);
        break;
    
}

}
