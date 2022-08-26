#include<stdio.h>

int main()
{
      int a,o,t,h,temp,new;

    printf("Enter a 3-digit Number:");
    scanf("%d",&a);

    o=a%10;

    temp=a/10;
    t=temp%10;

    h=temp/10;

    new=t*100+o*10+h;

    printf("New number: %d",new);
    
    return 0;
}