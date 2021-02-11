#include<stdio.h>
void main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int pos, len;
    printf("Enter position and length of substring: ");
    scanf("%d%d", &pos, &len);
    char sub[100];
    int i = 0;
    while(i<len)
    {
        sub[i] = str[pos+i-1];
        i++;
    }
    sub[i] = '\0';
    printf("substring: %s", sub);
}