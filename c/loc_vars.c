#include <stdio.h>
void main()
{
    int x =4;
    int y;
    int z;
    {
        int x=45;
        y=35;
        int z=12;
        printf("%d       %d       %d\n",x,y,z);
    }
    printf("%d       %d         %d\n",x,y,z);
}