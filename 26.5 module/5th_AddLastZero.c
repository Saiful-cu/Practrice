#include<stdio.h>

int addLastZero(int arr[],int n);

int main()
{
    int arr[100],n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ans = addLastZero(arr, n);

    printf("%d",ans);

    return 0;
}
int addLastZero(int arr[],int n)
{
    int ans =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%10 == 0)
        {
            ans +=arr[i];
        }
    }
    return ans;
}
