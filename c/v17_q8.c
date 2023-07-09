#include <stdio.h>
int f(int n){
    int x=0;
    if(n>1) return (n + f(n-1));
    return x;
}
void main()
{
    printf("%d",f(5));
}