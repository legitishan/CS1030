#include <stdio.h>
void main()
{   int con=0,vow=0;
    char a[100];
    printf("enter str: ");
    fgets(a, sizeof(a), stdin);
    for(int i = 0; i < 100; i++)
    {
    if (a[i]=='A' || a[i]=='E' || a[i]=='I'|| a[i]=='O' || a[i]=='U'|| a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
    vow+=1;
    else if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
    con+=1;
    }
    printf("Consonants: %d, Vowels: %d",con,vow);
}
