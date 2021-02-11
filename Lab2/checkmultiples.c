#include <stdio.h>

void main()
{
    int a,b;
    printf ("Enter two no's: ");
    scanf ("%d %d",&a,&b);
    if(a%b==0 || b%a==0)printf("Multiples present");
    else printf("No Multiples");
}
