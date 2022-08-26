#include<stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    
    if(n&1==1)
    {
        printf("\nNumber is odd");
    }
    else
    {
    printf("\nNumber is even");
        }
            return 0;
}