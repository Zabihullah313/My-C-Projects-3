#include "stdio.h"
int main (){
    int i;
    scanf("%d",&i);
    int sum=0;
    for(int j=0;j<i;j+=2)
    {
        sum=sum+j;
    }
    printf("%d",sum);

}
