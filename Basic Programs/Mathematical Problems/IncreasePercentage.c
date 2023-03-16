#include<stdio.h>

int main(){
    float value,increase;
    scanf("%f %f",&value,&increase);
    float inc= (value*increase/100);
    float result=value+inc;
    printf("Result %.2f ",result);
}