#include <stdio.h>
int main (void)
{
    int sum=0;
    int count;
    for (count=1;count<100;count+=2)
    {
        sum=sum+count;
    }
    printf("%d",sum);
}