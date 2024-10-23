#include <stdio.h>
int main (){
    int num;
    printf("Enter a positive number to be checked if its prime number :");
    scanf("%d",&num);
    if(num<0)
        printf("Enter a positive number ");
    if (num==1||num==0)
        printf("This is neither composite nor prime number ");
    int flag=0;
    for (int i=3;i<=num/2;i++){
        if(num%i==0){
            flag=1;
            }

    }

    if(flag==0&&num>0)
        printf("%d is prime number ",num);
    else if(flag!=0)
        printf("%d is composite number ",num);

    return 0;

}
