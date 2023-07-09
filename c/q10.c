#include<stdio.h>
int main()
{
    int a[2][4]={{10,20,30,40},{50,60,70,80}};
    int *p=a;
    p++;
    *p++;
    ++*p;
    printf("%d",*p+1);
}
