#include<stdio.h>

int main()
{
    int INR;
    float USD;

    printf("Enter an amount in INR: ");
    scanf("%d", &INR);

    USD=INR/76.23;

    printf("\n The amount in USD is: %f", USD);

    return 0;
}