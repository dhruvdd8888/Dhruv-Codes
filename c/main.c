#include<stdio.h> 
static int x=1;
int main(int z){
    if(x==1||x==2)
    {
        x++;
        z=2;
    }
    if(z==2)
    printf("hell");
    main(4);
    return 0;
}