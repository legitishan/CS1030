#include<stdio.h>
void main()
{
int arr[100],i,n,max,min;
printf("No. of elements: ");
scanf("%d",&n);
printf("Elements: ");
for(i=0;i<n;++i){scanf("%d",&arr[i]);}

max=min=arr[0];
for(i=1;i<n;++i){
if(arr[i]>max) max=arr[i];
if(arr[i]<min) min=arr[i];}

printf("Smallest:%d\n",min);
printf("Largest:%d",max);

}