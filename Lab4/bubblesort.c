#include<stdio.h>
void main(){
    int a;
    printf("No. of elements in the array: ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter elements: ");
    for(int i=0;i<a;i++){scanf("%d", &arr[i]);}
    
    printf("Original Array: ");
    for(int i=0;i<a;i++)
    {printf("%d ", arr[i]);}
    printf("\n");

    printf("Sorted Array: ");
    for(int i=0;i<a;i++)
    {for(int j=i+1;j<a;j++)
    {
    if(arr[i]>arr[j]){
    int temp=arr[j];
    arr[j]=arr[i];
    arr[i]=temp;}
    }
    printf("%d ", arr[i]);
    }}