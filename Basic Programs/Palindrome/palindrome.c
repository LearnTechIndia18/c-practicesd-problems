#include<stdio.h>

int main()
{
    int n,sum=0,temp,r;
    printf("Enter the number: ");
    scanf("%d",&n);
    // Hold the value in the temp variable
    temp=n;
    //121
    while(n>0)
    {
    /* To get the last one digit */
    r=n%10;
    //1    
    sum=(sum*10)+r;
    //12
    n=n/10;
    }
    /* After the loops are terminated */
    if(temp==sum)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}