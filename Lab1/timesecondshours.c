#include<stdio.h>
void main()
{
    int a;
    int m,h,rem1;
    printf("Enter seconds: ");
    scanf("%d",&a);
    h=a/3600;
    rem1=a%3600;
    printf("Hours %d \n",(h));
    m=rem1/60;
    rem1=rem1%60;
    printf("Minutes %d\n",(m));
    printf("Seconds %d",(rem1));
}