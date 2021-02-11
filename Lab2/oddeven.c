#include<stdio.h>
#include<math.h>

void main()
{
int a;
printf("Enter a number>0: ");
scanf("%d",&a);

if (a%2!=0 || a==1)printf("Odd");
else printf("even");
}