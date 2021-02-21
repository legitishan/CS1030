#include <stdio.h>
int max(int len,int arr[]);
int gcd(int n1, int n2);
void main()
{
    int n,len,n1,n2;
    printf("Enter length of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max(n,a);
    printf("Enter 2 numbers: ");
    scanf("%d%d",&n1,&n2);
    gcd(n1,n2);
}
int max(int len, int arr[])
{
    int count=0;
    for(int i=0;i<len;i++) {count+=arr[i];}
    printf("%d\n",count);
}
int gcd(int n1, int n2) {
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        printf("%d",n1);
}
