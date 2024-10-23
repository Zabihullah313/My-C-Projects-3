#include<stdio.h>
#include <math.h>
int main(){
    printf("Enter a number :");
    long long int  n;
    scanf("%lld",&n);
    int i;
    for(i=1;i<10000;i++)
    {
        if(pow(2,i)>n) {
            int p = pow(2, i);
            printf("%d", p);
            break;
        }
        else continue;
    }
}
