#include<stdio.h>
void main(){
int n,k;
printf("Enter n: ");
scanf("%d",&n);

for(int i=2;i<(int)(n/2);i++)
{
    if(n%i==0){printf("Not prime");k=1;break;}
    else k=0;
}
if (k==0) printf("Prime");
}
