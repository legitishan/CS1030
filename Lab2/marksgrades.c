#include <stdio.h>

void main()
{
    int a;
    printf("enter score: ");
    scanf("%d",&a);
    if (a>=9&&a<=10)printf("A");
    else if (a>=7&&a<=8)printf("B");
    else if (a>=5&&a<=6)printf("C");
    else if (a>=3&&a<=4)printf("D");
    else printf("F");
}
