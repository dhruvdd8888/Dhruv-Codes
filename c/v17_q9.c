#include <stdio.h>
int f(int n){
    if(n<3) return n;
    else return f(n-1)*f(n-2)+f(n-3);
}
void main()
{
    printf("%d",f(4));
}