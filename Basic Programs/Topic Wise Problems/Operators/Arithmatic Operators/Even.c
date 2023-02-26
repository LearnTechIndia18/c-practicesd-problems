#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int rem=a%2;
    if(rem==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}