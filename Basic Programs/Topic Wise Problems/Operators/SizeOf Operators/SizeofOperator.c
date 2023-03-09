#include<stdio.h>

int main(){
    int a=10;
    unsigned int result;
    result=sizeof(a);
    printf("%d",result);
    int arr[10];
    result=sizeof(arr);
    printf("\t%d",result);
}