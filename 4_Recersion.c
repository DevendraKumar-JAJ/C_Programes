#include<stdio.h>
#include<conio.h>
#include<math.h>

//Function Deceleration......
void A1(int count);
void A2(int count);
void A3(int count);
void A4(int count);
void A5(int count);

int main(){

// Variable Deceleration...
    int n,m;


//Getting Data From User....
    printf("\n\n\aEnter How many time you want to print\t\t:\t\a");
    scanf("%d",&n);

    printf("\n\n\aEnter [1_ for print Radhesyam]\t [2_ for print Jai Siyaram]\t [3_ for print Jai Hanuman]\t [4_ for print Jai Mahakal]\t [5_ for print Jai Sanatan \t\t:-\t\a");
    scanf("%d",&m);

//Function call.....

    switch ( m)
    {   
    case 1:
        A1(n);
        break;
    case 2:
        A2(n);
        break;
    case 3:
        A3(n);
        break;
    case 4:
        A4(n);
        break;
    case 5:
        A5(n);
        break;


    
    default:printf("\n\n\aWorng Input:\n\n\n\a");
        break;
    }


    
    return 0;
}
//Function Definition.....
// Recersion....
void A1(int count){
    if (count==0)
    {
        return;
    }

    printf("Radhesyam\t\t");
    A1(count-1);
}

void A2(int count){
    if (count==0)
    {
        return;
    }

    printf("Jai Siyaram\t\t");
    A2(count-1);
}

void A3(int count){
    if (count==0)
    {
        return;
    }


    printf("Jai Mahakal\t\t");
    A3(count-1);
}

void A4(int count){
    if (count==0)
    {
        return;
    }

    printf("Jai Mahakal\t\t");
    A4(count-1);
}

void A5(int count){
    if (count==0)
    {
        return;
    }

    printf("Jai Sanatan\t\t");
    A5(count-1);
}