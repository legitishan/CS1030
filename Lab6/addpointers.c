#include <stdio.h>
void main()
{
   int a1, a2, *p, *q, sum;
   printf("Enter two numbers: ");
   scanf("%d%d", &a1, &a2);
   p = &a1;
   q = &a2;
   sum=*p+*q;
   printf("Sum: %d", sum);
}