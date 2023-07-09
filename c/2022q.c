#include<stdio.h> 
int main(int argc, char *argv[]){ 
 char a = 'P'; 
 char b = 'x'; 
 char c = (a & b) + '*'; 
 char d = (a | b) - '-'; 
 char e = (a ^ b) + '+'; 
 printf("%c %c %c\n", c, d, e); 
 return 0; 
}