#include <stdio.h>
int main(void){
    float avr, math,phys,prog,pers,akhl,eng;
    printf("Enter your mathematics score: ");
    scanf("%f",&math);
    printf("Enter your physics score: ");
    scanf("%f",&phys);
    printf("Enter your c programming score: ");
    scanf("%f",&prog);
    printf("Enter your persian score: ");
    scanf("%f",&pers);
    printf("Enter your akhlaq Islami score: ");
    scanf("%f",&akhl);
    printf("Enter your English score: ");
    scanf("%f",&eng);
    avr=(math*3+phys*3+prog*4+pers*3+akhl*2+eng*1)/16;
    printf("The average of your scores is %f\n",avr);
    printf("The percentage average of your scores is %f %%",avr*5);
}