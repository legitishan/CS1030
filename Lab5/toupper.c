#include <stdio.h>
void main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(int i = 0; i < 100; i++){str[i] = toupper(str[i]);}
    puts(str);
}
