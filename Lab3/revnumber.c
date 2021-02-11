#include <stdio.h>
void main() {
    int a, rev = 0, rem;
    printf("Enter an integer: ");
    scanf("%d", &a);
    while (a!=0)
    {rem=a%10;
    rev=rev*10+rem;
    a=a/10;}
    printf("Rev number: %d", rev);
    }
