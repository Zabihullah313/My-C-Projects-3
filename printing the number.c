#include<stdio.h>
int main()
{   int n;
    printf("How many number you want to enter :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d number :",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
