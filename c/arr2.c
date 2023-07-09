#include <stdio.h>

void main()
{
    int a[2][3] = {10,20,30,40,50,60};
    printf("%d\n", a);
    // printf("%d\n", &a[0]);
    // printf("%d\n", &a);
    // printf("%d\n", a+5);
    // printf("%d\n", &(a[5]));
    // printf("%d\n", &a+1);
    // printf("%d\n", &(a+1)[4]);
    int *first = (a+1)+1;
    *first++;
    // printf("%d\n",*(first));
    printf("%d      ", a);
    printf("%d\n",a+1);


    printf("%d      ", &a);
    printf("%d\n",&a+1);


    printf("%d      ", a[0]);
    printf("%d\n",a[0]+1);


    printf("%d      ", a[1]);
    printf("%d\n",a[1]+1);
    

    printf("%d      ", a[1][1]);
    printf("%d\n",a[1][1]+1);
}