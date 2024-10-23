#include<stdio.h>
int main(void)
{
    float deg;
    scanf("%f",&deg);
    if (deg>100.0)
        printf("Steam");
    else if(0.0<=deg&&deg<=100.0)
        printf("Water");
    else
    printf("Ice");

    }
