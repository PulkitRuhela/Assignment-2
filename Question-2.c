#include<stdio.h>

int main()
{
    int num,num2;

    printf("Enter the Number:");
    scanf("%d",&num);

    num2=num/10;

    printf("The %d without its last digit is: %d ", num, num2);

    return 0;

}