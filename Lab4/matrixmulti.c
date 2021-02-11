#include<stdio.h>    
void main(){  
int a[10][10],b[10][10],x[10][10];
int r,c,i,j,k;
printf("No. of rows and columns: ");
scanf("%d%d",&r,&c);
printf("First Matrix elements:\n");    
for(i=0;i<r;i++){ for(j=0;j<c;j++) scanf("%d",&a[i][j]);}    
printf("Second Matrix elements:\n");    
for(i=0;i<r;i++){for(j=0;j<c;j++){scanf("%d",&b[i][j]);}}    

printf("Matrix Multipied\n");    
for(i=0;i<r;i++){
for(j=0;j<c;j++){
x[i][j]=0;    
for(k=0;k<c;k++){x[i][j]+=a[i][k]*b[k][j];}}}    
for(i=0;i<r;i++){    
for(j=0;j<c;j++){printf("%d ",x[i][j]);}    
printf("\n");}}  