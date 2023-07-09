#include<stdio.h>
int f(int n)
{
    static int i=0;
    if(n>0)
    {
        ++i;
        f(n-1);
    }
    return i;
}
int f2(int n)
{
    static int i=0;
    if(n>0)
    {
        i=i+f(n);
        printf("%d   ",i);
        f2(n-1);
    }
    return i;
}
int main()
{
    printf("%d",f2(4));
}
