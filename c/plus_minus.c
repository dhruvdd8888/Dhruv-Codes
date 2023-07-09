#include<stdio.h>

void main()
{
    printf("Enetr a num  ");
    int x;
    scanf("%d",&x);
    
    printf("Enetr a num  ");
    int y;
    scanf("%d",&y);

    printf("\n x %d",x);
    x=-x;
    printf("\n x after -x%d",x);
    y=+-x;
    printf("\n y after +-x 3%d",y);
}