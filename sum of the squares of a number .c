#include <stdio.h>
int main(){
    int n;
    long long int sum=0;
    int i=1;
    int temp;
    printf("Enter a to calculate the sum of squares of a number;");
    scanf("%d",&n);
    while (i<=n)
    {
        temp=i*i;
        sum=sum+temp;
        i++;
    }
    printf("%lld",sum);

}