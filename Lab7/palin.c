#include <string.h>
#include <stdio.h>
int checkpalindrome(char *s)
{
    int i,c=0,n;
    n=strlen(s);
    for(i=0;i<n/2;i++)
    {
        if(s[i]==s[n-i-1])c++;
    }
    if(c==i)return 1;
    else return 0;
}
int main()
{
    char s[100];
    printf("Enter a String: ");
    gets(s);
    if(checkpalindrome(s))printf("Palindrome. ");
    else printf("Not a Palindrome");
    
}