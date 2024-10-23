#include<stdio.h>
int main (void)
{
    unsigned long long int x;
    printf("Enter a number:");
    scanf("%lld",&x);
    int sum=0;
    while(x>0)
    {
        int temp=x%10;
        sum+=temp;
        x=x/10;
    }
    printf("The sum of all digits of your numbers is %d .",sum);
    return 0;
}