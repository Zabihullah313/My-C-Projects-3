#include <stdio.h>
int main (){
    float a ,b,c;
    printf("Enter first and second angles of your triangle :");
    scanf("%f%f",&a,&b);
    if((a+b)>180)
        printf("Invalid inputs!");

    else {
        c = 180 - (a + b);
        printf("%.2f degree is the 3rd angle of the triangle.", c);
    }
}