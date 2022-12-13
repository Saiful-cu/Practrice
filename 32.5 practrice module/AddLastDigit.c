#include<stdio.h>

int AddLastDigit(int arr[],int n,int sum)
{
    while(n!=0)
    {
        sum += arr[n-1]%10;
         printf("%d \n",sum);
        n -=1;
        AddLastDigit(arr,n,sum);
    }
    return sum;

}

int main()
{
    int arr[1000],n;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    sum = AddLastDigit(arr,n,sum);

    printf("%d",sum);

    return 0;
}
