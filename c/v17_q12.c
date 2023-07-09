#include <stdio.h>
int f(int n)
{
    static int x=1;
    if(n<=0) return 1;
    x=x+1;
    return 2+f(n-x);
}
void main()
{
    printf("%d", f(8));
}