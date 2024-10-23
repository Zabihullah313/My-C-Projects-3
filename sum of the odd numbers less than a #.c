#include "stdio.h"
int main (){
    int i;
    scanf("%d",&i);
    int sum=0;
    for(int j=1;j<i;j++)
    {
        if (j%2==1)
            sum=sum+j;
    }
    printf("%d",sum);

}