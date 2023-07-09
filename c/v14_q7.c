#include <stdio.h>
int f(){
    static int x=5;
    return x--;
}
void main()
{
    for(f();f();f());
    // f();
    // f();
    // f();
    printf("%d",f());
}