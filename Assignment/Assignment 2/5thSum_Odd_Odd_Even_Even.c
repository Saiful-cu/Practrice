#include <stdio.h>


int sumOfArray(int arr[],int n);

int main()
{
    int n,arr[100];
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum = sumOfArray(arr,n);
    printf("%d\n",sum);

    return 0;
}

int sumOfArray(int arr[],int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2 ==0 && arr[i]%2 ==0)
            sum +=i+arr[i];
        else if(i%2!=0 && arr[i]%2 !=0)
                sum +=i+arr[i];
    }
    return sum;
}
