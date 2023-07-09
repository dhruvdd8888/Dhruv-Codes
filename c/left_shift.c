#include<stdio.h>

void main()
{
    printf("Enetr a num  ");
    int x;
    scanf("%d",&x);
    printf("x = %d changes to %d by 9<<x",x,9<<x);
    printf("\ni.e. Gives 9 * (2^x)\n");
}