#include<stdio.h>
#include<conio.h>

int swap(int *,int *);
void main()
{
    int a=5,b=10;
    printf("\na=%d,b=%d",a,b);
    swap( &a, &b);
    printf("\na=%d,b=%d",a,b);


}
int swap(int *a,int *b)
{

    int *A=a;
    int *B=b;
    *A=*A+*B;
    *B=*A-*B;
    *A=*A-*B;
}