#include <stdio.h>
int main(){
    int a=5;
    int b=4;
    int arr[5]={1,1,1,1,1};
    printf("%p ,%p ,%p, %p",arr[2],&arr[4],&a,b);
}