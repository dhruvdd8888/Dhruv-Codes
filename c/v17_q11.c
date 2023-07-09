#include <stdio.h>
int f(int n)
{
    int x;
    if (n <= 1)
        x = 3;
    else
        x = f(n - 2) - f(n - 1);
    return x;
}
void main()
{
    printf("%d", f(4));
}