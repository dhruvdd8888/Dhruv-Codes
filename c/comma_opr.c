#include<stdio.h>

void main()
{
    // printf("Enetr a num  ");
    int y,x=(3,5); //x takes 5 ____ y takes garbage
    printf("\n first x %d",x);
    printf("\n first y %d",y);
    printf("\n--------------------\n");
    x=(4,3,2);
    printf("\n second x %d",x);
    printf("\n second y %d",y);
    printf("\n--------------------\n");
    x=42,y=23;
    printf("\n third x %d",x);
    printf("\n third y %d",y);
}