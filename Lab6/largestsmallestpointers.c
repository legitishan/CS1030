#include <stdio.h>
void main()
{
    int num1, num2, num3;
    int *p1, *p2, *p3;
    printf("Enter Numbers 1 to 3: ");
    scanf("%d%d%d",&num1,&num2,&num1);
    p1 = &num1;
    p2 = &num2;
    p3 = &num3;
    if(*p1 > *p2)
    {
	if(*p1 > *p3)   {printf("%d is the largest number", *p1);}
	else            {printf("%d is the largest number", *p3);}
    }
    else
    {
	if(*p2 > *p3)   {printf("%d is the largest number", *p2);}
	else            {printf("%d is the largest number", *p3);}
    }
    printf("\n");
    if((*p1 <= *p2)&&(*p1 <= *p3))
	{printf("%d is the smallest number", *p1);}
	else if((*p2 <= *p1)&&(*p2 <= *p3))
	{printf("%d is the smallest number", *p2);}
	else 
	{printf("%d is the smallest number", *p3);}
}