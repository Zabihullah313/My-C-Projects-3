#include <stdio.h>

int main(){
    short n;
    printf("Enter a number positive number less than 30:");
    scanf("%hd",&n);
    puts("");
    for (int i = 1; i <=n ; i++) {
        printf("* ");
    }
    puts("");
}

