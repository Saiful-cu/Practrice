#include<stdio.h>

void PrintArray(int* arr,int n);

int main()
{
    int n;
    scanf("%d",&n);

    int arr[100];


    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]); // user input of an array
    }

    PrintArray(&arr,n);

    return 0;
}

void PrintArray(int* arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",*arr+i);
    }
}
