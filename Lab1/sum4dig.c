#include<stdio.h>
void main()
{
    int a,b,c,d;
    b=0;
    printf("enter a 4 dig number: ");
    scanf("%d",&a);
    for (int i=0;i<4;i++)
    {
        c=a%10;
        b+=c;
        a=a/10;
    }
    printf("%d",b);
}