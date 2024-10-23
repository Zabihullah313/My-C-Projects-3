#include <stdio.h>
int main (){
    int num;
    printf("Enter a positive number to be checked if its prime number or no :");
    scanf("%d",&num);
    if(num<0)
        printf("Enter a positive number ");
    if (num==1)
        printf("This is a composite number ");
    if (num==2)
        printf("2 is a prime number");

    for (int i=3;i<(num/2);i++){
        if(num/i==0)
            printf("This is composite number ");
        if(num/i!=0)
            printf("This is prime number ");
    }
    return 0;

}