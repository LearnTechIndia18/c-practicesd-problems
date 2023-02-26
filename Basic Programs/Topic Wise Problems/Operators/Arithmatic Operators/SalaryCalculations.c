#include<stdio.h>
int main()
{
    float bs,hra,da,gs;
    /* Get the value of Basic Salary */
    scanf("%f",&bs);
    /* 40% of Basic Salary is HRA */
    hra=bs*0.4;
    /* 20% of Basic Salary is DA */
    da=bs*0.2;
    /* Gross Salary */
    gs=bs+hra+da;
    printf("\nBasic Salary: %0.2f",bs);
    printf("\nHRA : %0.2f",hra);
    printf("\nDA : %0.2f",da);
    printf("\nGross Salary: %0.2f",gs);
    return 0;

}