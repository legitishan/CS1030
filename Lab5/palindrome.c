#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    printf("Enter the string: ");
    gets(s);
    int n = strlen(s);
    int i,c = 0;
    for(i=0; i<n/2; i++)
    {
        if(s[i] == s[n-i-1]){c++;}
    }
    if(c==i){printf("palindrome.");}
    else{printf("not a palindrome");}
}