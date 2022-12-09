#include<stdio.h>

void fibonacci_is(int n,int arr[])
{
    arr[0]=0;
    arr[1] =1;
    for(int i=2;i<n;i++)
    {
        arr[i]= arr[i-1]+arr[i-2];
    }
}
void print_fibonacci(int n,int arr[])
{
    for(int i=0;i<n-1;i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("%d",arr[n-1]);
}
int main()
{
    int n,arr[1000];
    scanf("%d",&n);

    fibonacci_is(n,arr);

    print_fibonacci(n,arr);

    return 0;
}
