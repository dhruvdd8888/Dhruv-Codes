#include <stdio.h>
int f(int n)
{
    if (n < 1)
        return 1;
    else
        return 2 * f(n - 3) + 3 * f(n - 2);
}
void main()
{
    printf("%d", f(3));
}