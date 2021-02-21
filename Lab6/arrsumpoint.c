#include<stdio.h>
void main()
{
    int n;
    printf("Enter the No. of elements in the array: ");
    scanf("%d", &n);
    int *ele,arr[n];
    ele = &arr[0];
    int sum = 0;
    int *sum1 = &sum;
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",ele);
        sum = *sum1 + *ele;
        ele+=1;
    }
    printf("Sum of array is: %d", sum);
}