#include<stdio.h> 
int main(){
    int x,y=7;
    x=(y++,++y,-y); 
 printf("%d""      %d",x,y);
}