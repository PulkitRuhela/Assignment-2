#include<stdio.h>

int main()
{
    int x, count=0, result=0;

    printf("Enter a number: ");
    scanf("%d",&x);

    while (x!=0)
    {
        result=x&1;
        count++;    
        if (result==1)
        {
            printf("\n%d",count);
            break;
        }
        x=x>>1;

    }

    return 0;
}