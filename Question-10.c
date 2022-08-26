#include<stdio.h>

int main()
{
    int x, a, new;
    printf("Enter a Number: ");
    scanf("%d",&x);

    a=x%10;
    new=x-a;

    printf("New number after making last digit zero: %d", new);

    return 0;
}