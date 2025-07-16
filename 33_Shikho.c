#include<stdio.h>
int main()
{
    int m=10;
    int l,o;
    l=++m;
    o=m++;
    l--;
    --o;
    l-=o;
    printf("\n%d",l);
    return 0;
}
