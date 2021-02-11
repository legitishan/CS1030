#include<stdio.h>
void main() {

  int a, i,printv;

  printf("Enter a number:");
  scanf("%d",&a);

  printf("Descending order:");

  for (i=a;i>=0;i--) 
  {
    printv=1+i*2;
    printf("%d\n",printv);
  }

}