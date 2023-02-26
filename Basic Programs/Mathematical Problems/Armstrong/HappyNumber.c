#include<stdio.h>

int main()
{
    int n, temp, sum=0,i,r;
    printf("Enter the value");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum+=r*r;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("Happy Number");
    }
    else
    {
        printf("Not Happy Number");
    }
}