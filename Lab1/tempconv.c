#include<stdio.h>
void main()
{
    int b,c;
    char a;
    printf("Enter 1 for F to C, 2 for C to F: ");
    scanf("%c",&a);
    switch (a)
    {
    case '1':
        printf("enter temp in F: ");
        scanf("%d",&b);
        c=(b-32)*5/9;
        printf("%d",c);
        break;
    case '2':
        printf("enter temp in C: ");
        scanf("%d",&b);
        c=9*(b)/5+32;
        printf("%d",c);
        break;
    }

}