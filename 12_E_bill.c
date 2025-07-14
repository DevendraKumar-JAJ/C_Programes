#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int E_Unit;

    printf("\nEnter Electricity in Units.:\t");
    scanf("%d",&E_Unit);

    if (E_Unit<=50&&E_Unit>=0)
    {
        printf("Your Total charges is =%frs.[E_Unit*1.5rs]",E_Unit*1.5);
    }else if (E_Unit<=100&&E_Unit>=51)
    {
        printf("Your Total charges is =%frs.[E_Unit*1.75rs]",E_Unit*1.75);
    }else if (E_Unit<=250&&E_Unit>=101)
    {
        printf("Your Total charges is =%frs.[E_Unit*2rs]",E_Unit*2);
    }else if (E_Unit>=251)
    {
        printf("Your Total charges is =%frs.[E_Unit*2.5rs]",E_Unit*2.5);
    }else{
        printf("Your giveing wrong input %d",E_Unit);
    }
    
    
    return 0;
    
}