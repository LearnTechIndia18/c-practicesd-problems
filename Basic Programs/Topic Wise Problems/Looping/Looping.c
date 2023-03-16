#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        // 0%2
       
        if(i%2==0){
        printf("\t%d",i);
        }
        
    }
    printf("\n");
    for(int i=3;i<=n;i++)
    {
        // 0%2
            
        if(i%3==0){
        printf("\t%d",i);
        }
        
    }
      printf("\n");
    //   Infinite loop
    //  Array index out of 
    for(int i=100;i>0;i--)
    {
        // 0%2
            
        if(i%3==0){
        printf("\t%d",i);
        }
        
    }
}