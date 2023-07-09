#include<stdio.h>
int f(int fd)
{
    fd++;
    printf("efe %d",fd);
    return fd;
}


void main()
{
    int i=3;
    for(i;i==3;i=f(i))
    {
    printf("hell %d\n",++i);
    i++;
    }
    printf("hell %d\n",++i);
}