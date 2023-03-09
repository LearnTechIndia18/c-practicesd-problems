#include<stdio.h>

int main()
{
    int a=2,b=3,x=0;
// comparatively increment it holds the value then it will performs the read operations
    x=(++a,b+=a);
//b=6
    printf("%d",x);
    x=(a*10,b+=a);
//b=9
    // Arithmetic operation only perform the operation on an operand
    printf("\n%d",x);
//Comma operator skips the first operations, returns the second operations
}