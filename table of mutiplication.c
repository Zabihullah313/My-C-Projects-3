#include <stdio.h>
int main(void)
{
    printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n","num","num*2","num*3","num*4","num*5","num*6","num*7","num*8","num*9","num*10");
    for (int i=1 ; i<=10 ; i++){
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",i,i*2,i*3,i*4,i*5,i*6,i*7,i*8,i*9,i*10);
    }
}