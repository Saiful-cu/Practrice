#include<stdio.h>

void swap(int *a, int *b);
void Bubble_sort(int arr[],int n);

int main()
{
    int arr[100],n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    Bubble_sort(arr,n);

    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}
void Bubble_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
        if(arr[i]<arr[j])
        {
            swap(&arr[i],&arr[j]);
        }
    }
}



void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
