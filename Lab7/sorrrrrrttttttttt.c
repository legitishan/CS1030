#include <stdio.h>
#include <string.h>
int compare(char first[100], char second[100]);
int compare(char first[100], char second[100]){return strcmp(first, second);}
void main()
{
	char name[100][100], temp[100];
	int i, j, n;
	printf("Enter the value of N : ");
	scanf("%d", &n);
	printf("Enter %d names :\n", n);
	for (i=0; i<n ; i++) scanf("%s",name[i]);
	for (i=0; i <n-1 ; i++)
    {
		for (j=i+1; j<n; j++)
        {
			if(compare(name[i], name[j]) > 0)
            {
				strcpy(temp, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], temp);
			}
		}
	}
	printf("Sorted names : \n");
	for (i=0; i<n ; i++){printf("%s\n",name[i]);}
}