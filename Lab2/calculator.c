
#include <stdio.h>
void main ()
{
    int a,b;
    char c;
    printf("enter + for addition,- for subtraction,* for multiplication, / for division: ");
    scanf("%c",&c);
    printf("Enter 2 no's : ");
    scanf("%d%d",&a,&b);
    switch(c)
    {
     case '+':
     printf("%d",(a+b));
     break;
     case '-':
     printf("%d",(a-b));
     break;
     case '*':
     printf("%d",(a*b));
     break;
     case '/':
     printf("%d",(a/b));
     break;
    }
    
}
