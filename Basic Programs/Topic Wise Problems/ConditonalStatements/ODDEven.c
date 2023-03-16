#include<stdio.h>

int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    int c=a%3;
    if(c==0)
    {
        printf("Odd");  
    }
    else
    {
        printf("Even");
    }
    
}