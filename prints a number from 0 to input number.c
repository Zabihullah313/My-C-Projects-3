#include <stdio.h>
int main (void){
    int num,i=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(i<=num){
        printf("%d\n",i);
        i++;
    }
}