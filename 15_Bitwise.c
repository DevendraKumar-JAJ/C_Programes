#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){

    int a=10,b=5,c,d,e,f,g,h;
    c=a&b;
    d=a|b;
    e=a^b;
    f=a=~b;
    g=a<<b;
    h=a>>b;

    printf("%d\n%d\n%d\n%d\n%d\n%d\n",c,d,e,f,g,h);

    return 0;


}