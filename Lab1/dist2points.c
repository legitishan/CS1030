#include<stdio.h>
#include<math.h>
//Find out the distance between two points e.g. (x1, y1) and (x2, y2).
// Hint: Distance=√(x2-x1)^2+ (y2-y1)^2
void main()
{
int x1,x2,y1,y2;
printf("Enter x1 and y1: ");
scanf("%d %d: ",&x1,&y1);
printf("Enter x2 and y2: ");
scanf("%d %d: ",&x2,&y2);
double d;
d=sqrt(((x2-x1)*(x2-x1)) +((y2-y1)*(y2-y1)));
printf("%f ",d);

}