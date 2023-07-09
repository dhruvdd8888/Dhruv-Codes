#include <stdio.h>
 extern int x;
void main(void)
{
    x = 5;
    printf("%d", x);
}