#include<stdio.h>
void main()
{
    int len = 0;
    char *p,arr[100];
    p = &arr[0];
    printf("Enter a string: ");
    fgets(arr, sizeof(arr), stdin);
    while(*p != '\0')
    {
        len++;
        p++;
    }
    len-=1;
    printf("Length of the string is: %d",len);
}