#include<stdio.h>
void main()
{
    char a[100], arr[100];
    printf("Enter a string:");
    fgets(a, sizeof(a), stdin);
    int count = 0, start, fin;
    while(a[count] != '\0'){count++;}
    fin=count-1;
    for(start = 0; start < count; start++)
    {
       arr[start] = a[fin];
        fin--;
    }
    printf("Reversed: %s",arr);
}