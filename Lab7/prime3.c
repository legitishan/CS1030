#include <stdio.h>
int primecheck(int);
int primeprinter(int n1);
void main()
{
    int fact1,a;
  	printf("Enter a number: ");
  	scanf("%d",&a);
  	if(primecheck(a)==1)printf("Not prime");
  	else printf("Prime\n");
  	printf("Enter a number: ");
  	scanf("%d",&a);
  	primeprinter(a);
}
int primecheck(int n)
{
    int i,sum=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {sum=1;break;}
    }return sum;
}
int primeprinter(int n)
{
    int size,sum=0,check,i=2;
    while(sum<=n)
    {
       check=primecheck(i);
       if (sum==n){break;}
       else if(check==0)
       {
           printf("%d\n",i);
           sum+=1;
       }i++;}}
