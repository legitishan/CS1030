#include <stdio.h>
void main() {
    int num,temp,rem,res=0;
    printf("Enter a three-digit integer: ");
    scanf("%d",&num);
    temp=num;

    while(temp != 0){
    rem=temp % 10;
    res+=rem*rem*rem;
    temp/=10;
    }
    if (res == num)printf("%d is an Armstrong number.",num);
    else printf("%d is not an Armstrong number.",num);
}