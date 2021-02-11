#include<stdio.h>    
void main(){  
int a[10][10];
int tot=0,avg=0,i,j,k;
for(i=1;i<=3;i++)
    { 
    printf("Student %d,Enter your 5 marks: ",i);
    for(j=1;j<=5;j++)
    {scanf("%d",&a[i][j]);}
    }
for(i=1;i<=3;i++){
    for(j=1;j<=5;j++)
    {tot+=a[i][j];}
    avg=(float)tot/5;
    printf("Student %d,Total marks are:%d,Avg marks are:%d \n",i,tot,avg);
    tot=0;
    avg=0;
    }
}

