
// Author Zabihullah Mohammadi and Abdul Musawer Wadan
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159

int main(){
    int deg, b, c ; //these are the sides of triangle
    float angA , x; //it is the angle between b and c
    srand(time(0));

    b=rand()% 21+5;
    c=rand()% 21+5;
    deg=rand()% 91+0;
    angA=deg*pi/180;

    x= sqrt(b*b+c*c-2*b*c*cos(angA));  //a=sqrt(b*b+c*c-2*b*c*cos(A)


    printf("\n (%d , %d) are two sides of a triangle and %d degree is the angle between them , the other side is << %.2f >>\n",b,c,deg,x);
    return 0;


}
