#include <stdio.h>
void main()
{
    int s=10,*p;
    p=&s;
    char *q="abc";
    
    *p=*q+++s;
    printf("%d",s);

}