#include<stdio.h>
void main()
{
    int a;
    double b,c,d;
    printf("enter size in mm: ");
    scanf("%d",&a);
    b=(double)a/10;
    c=(double)a/25;
    d=(double)a/300;
    printf("In cm: %f \n",b);
    printf("In inch: %f \n",c);
    printf("In feet: %f \n",d);
}