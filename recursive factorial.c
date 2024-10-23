#include <stdio.h>

unsigned long long int factorial(unsigned int num){
    if (num==0||num==1)
        return 1;
    else
        return num* factorial(num-1);
}
int main (void)
{
    unsigned int x;
    printf("Enter a number :");
    scanf("%u",&x);
    printf("%u! = %llu",x, factorial(x));
    return 0;
}