#include <math.h>
#include <stdio.h>
float a, b, c, sdelta;
int main(){
    printf("Input the a of (ax^2+bx+c): ");
    scanf("%f",&a);
    printf("Input the b of (ax^2+bx+c): ");
    scanf("%f",&b);
    printf("Input the c of (ax^2+bx+c): ");
    scanf("%f",&c);
    sdelta= sqrt(b * b - 4 * a * c);
    if (sdelta > 0 && a!=0){
        float x1= (-b + sdelta) / (2 * a);
        float x2= (-b - sdelta) / (2 * a);
        printf("The roots are x1 = %.2f and x2 = %.2f\n",x1,x2);
    }
    else if(sdelta == 0 && a!=0){
        float x1x2=(-b)/(2*a);
        printf("the roots are equal and x1 = x2 = %.2f\n",x1x2);
    }
    else { printf("impossible to be solved in set of real number\n");
    }
}
