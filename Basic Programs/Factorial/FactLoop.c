#include<stdio.h>

int main()
{
    // initialize the fact to 1, starts with 1
    int n, fact=1,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Fact: %d",fact);
}