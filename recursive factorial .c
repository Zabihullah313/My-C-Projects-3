#include <stdio.h>

int factorial(int n) {
    if (n == 1||n==0)
        return 1;
    else
        return factorial(n-1)*n;
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The %dth Factorial  is: %d\n", n, factorial(n));

    return 0;
}