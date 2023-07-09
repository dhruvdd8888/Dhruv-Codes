#include <stdio.h>
int f(int i){
    static int x=0;
    x=x+i;
    return x;
}
void main()
{
    int i,j=1;
    // int i=1,j=1;
    j+=f(i);//1
    j+=f(i);//2
    // j+=f(i);//3
    // j+=f(i);//4
    // j+=f(i);//5
    printf("%d",j);
}