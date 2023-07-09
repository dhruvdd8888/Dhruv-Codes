#include<stdio.h>

struct ax{
    int a:16;
    int b:16;
    int c:3;
    // int d;
}a;

void main(){
    int dd:8;
    printf("%d  %d  ",sizeof(dd));

    printf("%d",sizeof(a));
}