#include <stdio.h>

void main()
{
  int n;
  n = 5;
  int a[n];
  for (int i = 0; i < 5; i++)
    a[i] = i,
    printf("%d     ", a[i]);
  printf("%d     ", 1[a]);
  printf("%d", a);
  printf("      %d", *a + 2);
  int *add = &a[0];
  printf("  %d", *(add + 3));
}