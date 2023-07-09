#include <stdio.h>
void main()
{
    char * p="Program";
    printf("%c\n",*(((p+++2)+1)-3));
    printf("%c\n",*p);
}