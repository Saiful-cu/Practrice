#include<stdio.h>
#include<math.h>

void sortArray(int arr[], int arr1[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
    {
        if(arr[i]>arr[j])
            {
               temp = arr[i];
               arr[i]= arr[j];
               arr[j]=temp;
            }
        if(arr1[i]<arr1[j])
                {
                    temp = arr1[i];
               arr1[i]= arr1[j];
               arr1[j]=temp;
                }
    }

}
int main()
{
    int n,arr[102],arr1[102];

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    sortArray(arr,arr1,n);

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]-arr1[i]);
    }

    return 0;
}
