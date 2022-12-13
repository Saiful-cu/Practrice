#include<stdio.h>

int AddLastDigit(int arr[],int n)
{
    int r = arr[n]%10;
    if(n<0)
    {
        return 0;
    }
    return r+AddLastDigit(arr,n-1);

}

int main()
{
    int arr[1000],n;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int sum = AddLastDigit(arr,n-1);

    printf("%d",sum);

    return 0;
}
