#include <stdio.h>
int main()
{
  int ele, c, n;
  printf("Enter no.of elements in array\n");
  scanf("%d", &n);
  printf("Enter elements\n", n);
  int arr[n];
  for (c = 0; c < n; c++)
    scanf("%d", &arr[c]);
  printf("Enter element to search\n");
  scanf("%d", &ele);
  for (c = 0; c < n; c++)
  {
    if(arr[c]==ele)
    {
      printf("%d is present at [%d].\n", ele, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d is not present.\n", ele);

  return 0;
}