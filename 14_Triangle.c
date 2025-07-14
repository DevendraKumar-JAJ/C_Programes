#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){

    int Side_1,Side_2,Side_3,a;
    printf("\nEnter Sides of Triangle :\n");
    scanf("%d%d%d",&Side_1,&Side_2,&Side_3);

    printf("\nEnter [ 1_for find Triangle type. 2_for knowing Valid or Not.] :\t");
    scanf("%d",&a);

    switch (a)
    {
    case 2:
        if (Side_1>0&&Side_2>0&&Side_3>0)
        {
        printf("\nThis is Valid Triangle");
        }else{
        printf("\nThis is not a Valid Triangle");
        }
        break;

    case 1:
        if (Side_1==Side_2==Side_3)
        {
        printf("\nAlso this an Equilateral Triangle and Isosceles Triangle");

        }else if (Side_1==Side_3&&Side_3!=Side_2)
        {
        printf("\nAlso this an Isosceles Triangle");
        }else 
        {
        printf("\nAlso this a Scalene Triangle");
        }
        break;
    
    default:printf("\nWrong Input");
        break;
    }



    return 0;
}