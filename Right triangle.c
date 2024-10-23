#include <stdio.h>
int main(void) {
    int row ,c=65;
    printf("Enter number of the rows :");
    scanf("%d", &row);
    for (int i = row; i >= 1; i--) {
        for (int j = 1; j <= i; j++){
            printf("%c ",c);}
        c++;
        printf("\n");
    }
    printf("\n");
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

}