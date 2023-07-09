#include<stdio.h>
int main()
{
    char* c[]={"hell","worse","worst"};
    char ** d[]={c,c+1,c+2};
    char *** e[]={d,d+1,d+2};
    char**** p;
    p=e;
    ++p;
    printf("%s",**(p[0])+3);
}
