#include<stdio.h>

int main()
{
    int x=123, y=1999;
    int c=x<y;
    printf("%d",c);
    c=y<y;
    printf("\n%d",c);
    c=y<x;
    printf("\n%d",c);
}