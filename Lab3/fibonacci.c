#include<stdio.h>
void main(){
int n,a,b,c,sum;
printf("Enter n: ");
scanf("%d",&n);

a=0;
b=1;
for(int i;i<n-2;i++)
{
    
    sum=a+b;
    a=b;
    b=sum;
   
}
printf("%d",sum);
}
