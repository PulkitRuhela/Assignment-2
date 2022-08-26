#include<stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf("After Swapping, First number is: %d\n Second number is: %d", a,b);

    return 0;
}