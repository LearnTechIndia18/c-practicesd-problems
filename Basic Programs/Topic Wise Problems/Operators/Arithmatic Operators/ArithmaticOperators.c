#include<stdio.h>
int main()
{
    /* Source code >> Object file >> machine code >> executable file */
    int a,b;
    float x;
    printf("Enter 2 NOs: ");
    scanf("%d %d",&a,&b);
    int c=a+b;
    printf("\nSum: %d",c);
    c=a*b;
    printf("\nMul: %d",c);
    x=(float)a/(float)b;
    printf("\nDivisions: %f",x);
    c=a%b;
    printf("\nMod: %d",c);
}