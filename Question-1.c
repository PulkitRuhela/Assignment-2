#include<stdio.h>

int main()
{
    int num, num2;
    printf("Emter the Number:");
    scanf("%d",&num);

    num2=num%10;

    printf("The Unit digit of %d is: %d",num, num2);


    return 0;

}