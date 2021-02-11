#include<stdio.h>
void main()
{
    int a;
    printf("No. of elements in array: ");
    scanf("%d", &a);
    
    int array[a];
    printf("Enter elements: ");
    for(int i = 0; i<a; i++){scanf("%d", &array[i]);}
    
    printf("Original Array: ");
    for(int i=0;i<a;i++){printf("%d ",array[i]);}
    printf("\n");
    
    int rev[a];
    printf("Reversed Array: ");
    for(int i=a-1;i>=0;i--){rev[i]=array[a-i-1];}
    for(int i=0;i<a;i++)
    {printf("%d ", rev[i]);}
}