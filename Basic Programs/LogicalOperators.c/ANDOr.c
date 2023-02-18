#include <stdio.h>

int main()
{
int a=40,b=20;
int c=20,d=30;
/* If block executes atleast one time */
if (a>b && a !=0)
{
printf("&& Operator : Both the conditions are true\n");
}
if (c>d || d!=20)
{
printf("|| Operator : Only one of the conditions is true\n");
}
if (!(a>b && a !=0))
{
printf("! Operator : Both the conditions are true\n");
}
else
{
printf("! Operator : Both the conditions are true. \n But, the status is inverted to be false\n");
}

}