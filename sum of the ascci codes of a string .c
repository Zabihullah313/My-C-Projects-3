#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the length of string:");
    scanf("%d",&n);
    int sum_of_char=0;
    printf("Enter the string:");
    char str[n];
    scanf("%s",str);
    for (int i=0; i<n;i++)
    {
        int ascci = str[i];
        sum_of_char=sum_of_char+ascci;
    }
    printf("sum of ASCCI of the string is %d",sum_of_char);
    return 0;
}
