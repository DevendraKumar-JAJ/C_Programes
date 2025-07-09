#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
int a,b;
char c;


printf("[+,-,*,/,...] :\n");
scanf("%c",&c);

printf("1st no.\n");
scanf("%d",&a);

printf("2nd No.\n");
scanf("%d",&b);


if (c=='+')
{
    printf("%d\n",a+b);


}else if (c=='-')
{
    printf("%d\n",a-b);


}else if (c=='*')
{
    printf("%d\n",a*b);


}else if (c== '/')
{
    printf("%d\n",a/b);


}else if (c=='%')
{
    printf("%d\n",a%b);
}else
{
    printf("Wrong input\n");
}

    return 0;


}