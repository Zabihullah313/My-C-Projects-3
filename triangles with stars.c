//Equilateral triangle
#include <stdio.h>

int main()
{
    int temp=9;
    for (int i = 1; i <=10 ; i++) {
        for (int j=1;j<=temp;j++){
            printf(" ");
        }
        temp--;
        for (int k = 1; k <=i ; k++) {
            printf("* ");
        }
        puts("");


    }
}


// right triangle
/*int main()
{
    int temp=9;// for helping to print the spaces.
    for (int i = 1; i <=10 ; i++) {
        for (int j=1;j<=temp;j++){
            printf(" ");
        }
        temp--;
        for (int k = 1; k <=i ; k++) {
            printf("*");
        }
        puts("");


    }
}
*/



//another right triangle
/*
 #include <stdio.h>
int main(){

    int temp=0;
    for (int i=10;i>=1;i--){
        for (int j = 1; j <=i ; j++) {
            printf("*");
        }
        puts("");
        temp=temp+1;

        for (int k = 1; k <=temp ; k++) {
            printf(" ");

        }
    }
}
 */

//another equilateral triangle

/*#include <stdio.h>
int main(){

    int temp=0;
    for (int i=10;i>=1;i--){
        for (int j = 1; j <=i ; j++) {
            printf("* ");
        }
        puts("");
        temp=temp+1;

        for (int k = 1; k <=temp ; k++) {
            printf(" ");

        }
    }
}*/


//another right triangle
/*#include <stdio.h>

int main()
{
    for (int i = 1; i <=10 ; i++) {

        for (int k = 1; k <=i ; k++) {
            printf("*");
        }
        puts("");


    }
}

 //right triangle

/*#include <stdio.h>
int main(){


    for (int i=10;i>=1;i--){
        for (int j = 1; j <=i ; j++) {
            printf("* ");
        }
        puts("");

    }
}*/