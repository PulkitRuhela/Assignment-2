#include<stdio.h>

int main()
{
    int x,a,y,z;

    printf("Enter a Number: ");
    scanf("%d", &x);

    printf("\nEnter a digit which you want to append: ");
    scanf("%d", &y);

    a=x*10;
    z=a+y;

    printf("\nAfter appendig the digit, The resulting number is: %d",z);

    return 0;
}