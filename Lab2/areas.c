#include <stdio.h>
void main ()
{
      int choice,r,l,w,b,h;
      float area;
      printf("Enter 1 for area of circle,2 for area of rectangle,3 for area of triangle: ");
      scanf("%d",&choice);
      switch(choice)
      {
           case 1:
                 printf("Enter radius : ");
                 scanf("%d",&r);
                 area=3.14*r*r;
                 break;
            case 2:
                  printf("Enter length and breadth : ");
                  scanf("%d%d",&l,&w);
                  area=l*w;
                  break;
            case 3:
                  printf("Input the base and height:");
                  scanf("%d%d",&b,&h);
                  area=0.5*b*h;
                  break;
          }
          printf("The area is : %f\n",area);
}
