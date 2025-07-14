#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){

char C_H;

    printf("\nEnter Your Character. :\t");
    scanf("%c",&C_H);


if (C_H>='A' &&C_H<='Z')
{
    printf("\nThis is a Capital Alphabet [%c] ",C_H);

    switch (C_H)
    {
    case 'A':
        printf("\nAlso this is a Vowel [%c]",C_H);
        break;
    case 'E':
        printf("\nAlso this is a Vowel [%c]",C_H);
        break;

    case 'I':
        printf("\nAlso this is a Vowel [%c]",C_H);
        break;

    case 'O':
        printf("\nAlso this is a Vowel [%c]",C_H);
        break;

    case 'U':
        printf("\nAlso this is a Vowel [%c]",C_H);
        break;
    
    default:printf("\nAlso this a Consonant [%c]",C_H);
        break;
    }

}else if (C_H>='a'&&C_H<='z')
{
    printf("\nThis is a Small Alphabet [%c]",C_H);

    switch (C_H)
    {
    case 'a':
        printf("\nAlso this is a Vowel [%c]",C_H);
        break;
    case 'e':
        printf("\nAlso this is a Vowel [%c]",C_H);
        break;

    case 'i':
        printf("\nAlso this is a Vowel [%c]",C_H);
        break;

    case 'o':
        printf("\nAlso this is a Vowel [%c]",C_H);
        break;

    case 'u':
        printf("\nAlso this is a Vowel [%c]",C_H);
        break;
    
    default:printf("\nAlso this a Consonant [%c]",C_H);
        break;
    }
}
else
{ 
    printf("\nThis is not an Alphabet/Other Character [%c]",C_H);
}



    return 0;
}