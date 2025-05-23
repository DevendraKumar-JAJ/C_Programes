#include<stdio.h>
void main()
{
    int i=5,j=0,k=1,w,x,y,z;
    w=i||j||k;
    x=i&&j&&k;
    y=i||j&&k;
    z=i&&j||k;
    printf("\n%d\n%d\n%d\n%d",w,x,y,z);
}