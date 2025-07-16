//To check admission eligibility for higer education...
#include<stdio.h>
#include<conio.h>

void main(){
    int Math,Py,Chem;
    printf("\n Enter your Marks.\n ");
    scanf("%d%d%d",&Math,&Py,&Chem);

    if ((Math>=65&&Py>=55&&Chem>=50)||(Math+Py+Chem>=190)||(Py+Math>=140))
    {
        printf("\nYou are eligible  to admission for Higer Education.");
    }else{
        printf("\nSorry you are not eligible to Admission for Higer Education.");
    }

    
}