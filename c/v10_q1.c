#include <stdio.h>
void main()
{
    int a[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    printf("%d\n%d\n%d",a+3,*(a+3),**(a+2));
}