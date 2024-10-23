#include <stdio.h>
int main(void){
    int n,i=1,sum=0;
    scanf("%d",&n);
    while (i<=n){
        int sq=i*i;
        sum=sum +sq;
        i++;
    }
    printf("the square sum of %d is %d .",n,sum);
}