#include <stdio.h>
int main (void){

    printf("%-10s%-10s%-10s\n","Decimal","Octal","Hexadecimal");
    for (int i=1;i<=256;i++){
        printf("%-10d%-10o%-10x\n",i,i,i);
    }
}
//The binary does not print