#include <stdio.h>
int main(){
    int code;
    int count;
    int co1=0,co2=0,co3=0,co4=0,co5=0;
    double tot1,tot2,tot3,tot4,tot5;
    double to1=0,to2=0,to3=0,to4=0,to5=0;
    printf("Enter the code of the product:");
    scanf("%d",&code);
    printf("Enter the number of sold product:");
    scanf("%d",&count);

    while (4){

        if (code==-1||count==-1)
            break;
        else if(code>5||code<1)
            printf("Wrong input!\n");
        else
            switch (code) {
                case 1:
                    tot1=2.98*count;
                    to1+=tot1;
                    co1+=count;
                    break;
                case 2:
                    tot2=4.5*count;
                    to2+=tot2;
                    co2+=count;
                    break;
                case 3:
                    tot3=9.98*count;
                    to3+=tot3;
                    co3+=count;
                    break;
                case 4:
                    tot4=4.49*count;
                    to4+=tot4;
                    co4+=count;
                    break;
                case 5:
                    tot5=6.87*count;
                    to5+=tot5;
                    co5+=count;
                    break;
                default:
                    break;
            }
        printf("Enter -1 to stop.\n");
        printf("Enter the code of the product:");
        scanf("%d",&code);
        if (code==-1||count==-1)
            break;
        printf("Enter the number of sold product:");
        scanf("%d",&count);
        if (code==-1||count==-1)
            break;
    }

    printf("%-14s%-14s%-14s\n","Code","#sold","sold money");
    printf("%-14s%-14d%.2lf$\n","1",co1,to1);
    printf("%-14s%-14d%.2lf$\n","2",co2,to2);
    printf("%-14s%-14d%.2lf$\n","3",co3,to3);
    printf("%-14s%-14d%.2lf$\n","4",co4,to4);
    printf("%-14s%-14d%.2lf$\n","5",co5,to5);
    printf("%-14s%-14d%.2lf$\n","total",co5+co1+co2+co3+co4,to5+to2+to1+to3+to4);


}