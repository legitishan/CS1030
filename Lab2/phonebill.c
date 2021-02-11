#include <stdio.h>

void main()
{
    int a;
    float bill;

    printf("Enter number of calls :");
    scanf("%d", &a);

    if (a<=100)
    {
        bill=200;
    }
    else if (a>100 && a<=150)
    {
        a=a-100;
        bill=200+(0.60*a);
    }
    else if (a>150 && a<=200)
    {
        a=a-150;
        bill=200+(0.60*50)+(0.50*a);
    }
    else
    {
        a=a-200;
        bill=200+(0.60*50)+(0.50*50)+(0.40*a);
    }

    printf("Your bill is Rs. %f", bill);

}