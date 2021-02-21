#include <stdio.h>
int fact(int);
void main()
{
    int fact1,a;
  	printf("Enter a number: ");
  	scanf("%d",&a);
  	fact1=fact(a);
    printf("Factorial: %d",fact1);
}
int fact(int n)
{
    int i,sum=1;
    for(i=1;i<=n;i++){sum=sum*i;}
    return sum;
}
