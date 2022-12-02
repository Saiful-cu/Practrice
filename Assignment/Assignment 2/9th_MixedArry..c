#include<stdio.h>
#include<math.h>

int prime(int *n);
int avg(int *arr, int n);

int main()
{
    int n,arr[1000];

    scanf("%d",&n);

    int *p =&n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int avarage = avg(arr,n)/n;
    printf("Average of all positive integers: %d.00",avarage);

    return 0;
}

int avg(int *arr, int n)
{
    int sum = 0,primes =0;
    for(int i=0;i<n;i++)
    {
       // printf("%d ",*(arr+i));
        sum += *(arr+i);
        primes += prime(arr+i);
    }
    printf("Prime numbers: %d\n",primes);

    return sum;
}

int prime(int *n)
{
    int sqr = sqrt(*n);
    if(*n ==1)
        return 0;
    for(int i=2;i<sqr;i++)
        if(*n%i !=0)
          return 0;
    return 1;
}
