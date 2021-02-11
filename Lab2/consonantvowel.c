#include <stdio.h>

void main()
{
    char a;
    printf("enter char: ");
    scanf("%c",&a);
    if (a=='A' || a=='E' || a=='I'|| a=='O' || a=='U'|| a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    printf("Vowel");
    else if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    printf("Consonant.");
    else 
    printf("Digit");
    
}
