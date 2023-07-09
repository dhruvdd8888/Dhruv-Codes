#include<stdio.h>

int main()
{
    int a[]={3,6,884,3,52,42,56,2,11,3,5,4,5,6},i,m;
    for(m=a[0],i=0;i<(sizeof(a)/sizeof(int));i++,m=(m<a[i]?m:a[i]),i==(sizeof(a)/sizeof(int))?printf("%d",m):4);
}