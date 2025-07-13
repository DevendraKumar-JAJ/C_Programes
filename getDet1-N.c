#include<stdio.h>
#include<conio.h>
#include<math.h>


int  sum(int n);
int mul(int n);
int sub(int n);

int main(){

int m;

printf("\n\nEnter your No. M \t\t:\t");
scanf("%d",&m);

printf("\n\nSum of Natural no. 1 to M is \t\t:\t%d\n\n",sum(m));
printf("\n\nMultiplication of Natural no. 1 to M is \t\t:\t%d\n\n",mul(m));
printf("\n\nSubtraction of Natural no. 1 to M is \t\t:\t%d\n\n",sub(m));

return 0;
}

int sum(int n){

    if (n==1){
        return 1;
    }

    int SumNm1 =sum(n-1);
    int sumN= SumNm1+n;
    return sumN;
}

int mul(int n){

    if (n==1){
        return 1;
    }

    int mulNm1 =mul(n-1);
    int mulN= mulNm1*n;
    return mulN;
}

int sub(int n){

    if (n==1){
        return 1;
    }

    int SubNm1 =sum(n-1);
    int subN= SubNm1-n;
    return subN;
}
