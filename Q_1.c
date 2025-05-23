#include<stdio.h>
void main()
{
    int a=49,c;
    c=a=10;
    char b='1';
    if (a==b)
    {
        printf("FF");
    }else
    printf("\n%d%d%d",a,b,c);
}