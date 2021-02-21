#include <stdio.h>
int fib(int a, int b,int n1,int n2);
int fibprint(int a);
void main()
{
    int fact1,a;
  	printf("Enter a number: ");
  	scanf("%d",&a);
  	fib(0,0,1,a);
  	printf("\nEnter a number: ");
  	scanf("%d",&a);
  	fibprint(a);
}
int fib(int count,int a,int b,int n)
{
    int c=a+b;
    count+=1;
    if(count==n-2){printf("%d",c);}
    else fib(count,b,c,n);
}
int fibprint(int a)
{
    int i;
    printf("0\n1\n");
    for(i=3;i<=a;i++)
    {
        fib(0,0,1,i);
        printf("\n");
    }
}