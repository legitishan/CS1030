#include<stdio.h>
void main()
{
    int n;
    printf("No. of elements in array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++){scanf("%d", &array[i]);}
    printf("\n");
    
    for(int i = 0; i < n; i++)
    {printf("%d  ", array[i]);}
    printf("\n");
    
    int pos=0,neg=0,even=0,odd=0,zero=0;
    for(int i = 0; i < n; i++)
    {
        if(array[i] > 0){pos++;}
        else if(array[i] < 0){neg++;}
        if(array[i] == 0){zero++;}
        if(array[i] != 0){
        if(array[i]%2 == 0){even++;}
        else{odd++;}}
    }
    printf("No. of +ve elements: %d\n", pos);
    printf("No. of -ve elements: %d\n", neg);
    printf("No. of 0 elements:%d\n", zero);
    printf("No. of Even elements:%d\n", even);
    printf("No. of Odd elements: %d\n", odd);
}
