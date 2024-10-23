#include <stdio.h>

int main() {
    long long int n;
    printf("Enter a number :");
    scanf("%lld", &n);

    int sum  = 0, sum2=0,sum3=0,sum4=0;
    while (n > 0) {
        int temp = n % 10;
        sum = sum + temp;
        n = n / 10;
    }

    if (sum >= 10) {
        int n2=sum;
        while (n2 > 0) {
            int temp = n2 % 10;
            sum2 =sum2+temp;
            n2=n2/10;
        }
        if(sum2>=10){
            int n3=sum2;
            while(n3>0){
                int temp=n3%10;
                sum3=sum3+temp;
                n3=n3/10;
            }
            if (sum3>=10){
                int n4=sum3;
                while(n4>0){
                    int temp=n4%10;
                    sum4=sum4+temp;
                    n4=n4/10;
                }
                printf("sum = %d",sum4);
            }
            else printf("sum = %d",sum3);
        }
        else printf("sum = %d",sum2);
    }

    else printf("sum = %d", sum);


}
