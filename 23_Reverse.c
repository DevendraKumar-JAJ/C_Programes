//To create reverse of given word.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    char word[25],temp;

    int l,lind,rind,i;
    printf("\nEnter any Word.:\t");
    scanf("%s",word);
    l= strlen(word);

    lind=0;
    rind=l-1;

    for (i=lind; i <rind; i++)
    {
        temp=word[i];
        word[i]=word[rind];
        word[rind]=temp;
        rind--;
    }
    printf("\nReverse is : %s\n\n",word);
}