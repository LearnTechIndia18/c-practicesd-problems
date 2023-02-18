#include<stdio.h>

int main()
{
 
    float percentage, profit,invested, sold_value,IS;
    
    // Value of invested amount
    printf("Enter the invested amount ");
    scanf("%f", &invested);
    
    // Value of Sold value
    printf("Enter the Sold amount ");
    scanf("%f", &sold_value);

    // Profit
    profit=sold_value-invested;
    printf("\nProfit: %.2f",profit);

    // percentage
    percentage=profit/invested*100;
    printf("\nPercentage of Profit: %.2f",percentage);

    // End the program
    return 0;

}