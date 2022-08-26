#include<stdio.h>

int main()
{
    int a,o,t,h,s,temp;

    printf("Enter a 3-digit Number:");
    scanf("%d",&a);

    o=a%10;

    temp=a/10;
    t=temp%10;

    h=temp/10;

    s=o+t+h;

    printf("Sum of all three digits of the number is %d",s);

    return 0;
}