#include<stdio.h>
int f()
{
    static x=5;
    x=x-1;
    return x;
}
int main()
{
    int x=10;
    x=x+f();
    x=x+f();
    printf("%d",x);
}
