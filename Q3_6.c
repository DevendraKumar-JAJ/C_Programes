//Q3 For print Marks sheet with name and roll no. for print Division..
//Q7 for print Grade..

#include<stdio.h>
#include<conio.h>

void main(){
    int Math,Py,Chem,Roll;
    char name[25];

    printf("\nEnter Your Name.\n");
    fgets(name,sizeof(name),stdin);
    printf("\nHello %s.",name);

    printf("\nEnter your Roll No. .\t");
    scanf("%d",&Roll);

    printf("\nEnter Your Maths marks.\t");
    scanf("%d",&Math);
    printf("\nEnter Your Physics marks.\t");
    scanf("%d",&Py);
    printf("\nEnter Your Chemistry marks.\t");
    scanf("%d",&Chem);

    printf("\n---Name -: %s",name);
    printf("\n---Roll No.-:%d---",Roll);
    printf("\n---Maths marks-: %d---",Math);
    printf("\n---Physics marks-: %d---",Py);
    printf("\n---Chemistry marks-: %d---",Chem);

    printf("\n---Your Total Marks is %d.---",Math+Py+Chem);
    if (Math+Py+Chem>=270&&Math+Py+Chem<=300)
    {
        printf("---\nYour got E (Excellent) grade.---");
    }else if (Math+Py+Chem>=210&&Math+Py+Chem<=269)
    {
        printf("\n---Your got V (V-Good) grade.---");
    }else if (Math+Py+Chem>=180&&Math+Py+Chem<=209)
    {
        printf("\n---Your got G (Good) grade.---");
    }else if (Math+Py+Chem>=135&&Math+Py+Chem<=179)
    {
        printf("\n---Your got A (Avrage) grade.---");
    }else 
    {
        printf("\n---Try next time  grade F (fail).---");
    }
    
    if (Math+Py+Chem>=180&&Math+Py+Chem<=300)
    {
        printf("\n---1st Division---");
    }else if (Math+Py+Chem>135&&Math+Py+Chem<=179)
    {
        printf("\n---2nd Division---");
    }else 
    {
        printf("\n---Fail---");
    }


}