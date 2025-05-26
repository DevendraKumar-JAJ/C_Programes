#include<stdio.h>
#include<conio.h>
#include<math.h>
int Fact(int);

void main()
{
    int x,n;
    printf("\nEnter value of base x.\t");
    scanf("%d",&x);
    printf("\nEnter value of terms n.\t");
    scanf("%d",&n);

    float Exponent=0;
    
    for ( int i = 0; i<=n; i++)
    {
        Exponent=Exponent+pow(x,i)/Fact(i);
    }
    printf("\nValue of e^x=%f",Exponent);


}
int Fact(int a)
{
    if (a==1||a==0)
    {
        return 1;
    }
    return a*Fact(a-1);
}











