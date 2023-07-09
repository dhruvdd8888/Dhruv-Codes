#include<stdio.h>

void main()
{
    int i=3,j=342,k=1;
    i=i++;
    j=k+++(++k);
    printf("i %d\nj %d\nk %d\n",i,j,k);
}