#include<stdio.h>
#include<conio.h>

void main()
{
    float x1,x2,x3,y1,y2,y3,M,N;
    printf("\nEnter axis points in (X,Y) form\n");
    scanf("\n%f\n%f",&x1,&y1);
    printf("\nEnter axis points in (X,Y) form\n");
    scanf("\n%f\n%f",&x2,&y2);
    printf("\nEnter axis points in (X,Y) form\n");
    scanf("\n%f\n%f",&x3,&y3);
    M=(y2-y1)/(x2-x1);
    N=(y3-y2)/(x3-x2);

    if(M==N)
    {
        printf("\nEach axis are in straight line");
    }
    else
    {
        printf("\nEach axis are in distinct.");
    }
    
}