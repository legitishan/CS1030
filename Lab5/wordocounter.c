#include<stdio.h>
void main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int count= 0, i =0;
    while(str[i]!='\0'){
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t'){count++;}
        i++;
    }
    printf("No. of words: %d", count);
}