#include<stdio.h>  
 int main()    
{    
int n,r,sum=0,temp;    
printf("Hit the number");    
scanf("%d",&n);    
/* Hold the value in temp */
temp=n;    
while(n>0)    
{   
/* to get the last digit */ 
r=n%10;    
// Cube the number
sum=sum+(r*r*r);    
/* reduce one digit */
n=n/10;    
}    
/* to check the equality */
if(temp==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");    
return 0;  
}   