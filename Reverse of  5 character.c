#include <stdio.h>
char char1, char2, char3, char4, char5;
int main(){
    printf("Write 5 character to be inversed: ");
    scanf("%c%c%c%c%c",&char1 ,&char2 ,&char3 ,&char4 ,&char5);
    printf("%c%c%c%c%c",char5,char4,char3,char2,char1);
    return 0;
}
