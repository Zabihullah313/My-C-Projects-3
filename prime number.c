#include <stdio.h>
#include <math.h>

int check_prime(int num){
    if (num==2)
        return num;
    int temp=0;
    for(int i=2;i<=sqrt(num);i++){
        if (num%i==0)
            temp++;

    }
    if (temp==0)
        return num;
    else
        return -1;//for composite number
}

int main(void ){
    int num;
    printf("Enter your number to be checked:");
    scanf("%d",&num);
    if(check_prime(num)!=-1)
        printf("%d is a prime number.",num);
    else
        printf("%d is a not prime number.",num);
}