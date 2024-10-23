#include <stdio.h>
int main(void) {
    int a, b, c, d, e, f;
    printf("Enter your interval 1 sides (a,b) :");
    scanf("%d %d", &a, &b);
    printf("Enter your second interval 2 (c,d) :");
    scanf("%d %d", &c, &d);
    printf("Enter your third interval 3 (e,f) :");
    scanf("%d %d", &e, &f);

    int min_interval, max_interval;
    if (a >= c && a >= e)
        min_interval = a;
    else if (c >= a && c >= e)
        min_interval = c;
    else
        min_interval = e;

    if (b <= d && b <= f)
        max_interval = b;
    else if (d <= b && d <= f)
        max_interval = d;
    else
        max_interval = f;

    printf("This is the shared part of these three intervals(%d,%d)", min_interval, max_interval);
    return 0;
}




