#include <stdio.h>
int main(){

    int line;
    printf("Enter the lines of diamond (odd number):");
    scanf("%d",&line);
    int space=line/2;
    int star=1;

    //first half
    for (int i = 1; i <=line/2+1 ; ++i) {
        for (int j = 1; j <=space ; ++j) {
            printf("  ");
        }
        for (int k = 1; k <= star; ++k) {
            printf("* ");
        }
        puts("");
        star+=2;
        space-=1;
    }

    //second half
    int star2=star-4;
    int space2=1;
    for (int i = 1; i <=line/2; ++i) {
        for (int j = 1; j <=space2 ; ++j) {
            printf("  ");
        }
        for (int k = 1; k <=star2; ++k) {
            printf("* ");
        }
        puts("");
        star2-=2;
        space2+=1;
    }

}