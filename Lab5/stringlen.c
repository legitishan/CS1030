#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int count = 0, i = 0;
    while(str[i] != '\0')
    {
        count++;
        i++;
    }
    printf("Length of string is %d.\n", i);
}