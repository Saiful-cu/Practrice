#include<stdio.h>

int main()
{
    int arr[1000],numberOfElement,temp;
    scanf("%d",&numberOfElement);

    for(int i=0;i<numberOfElement;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<numberOfElement;j++)
    {
        for(int i=0;i<numberOfElement-1;i++)
        {
            if(arr[i] > arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
           // printf("%d ",arr[j]);
        }

    }
    for(int i=0;i<numberOfElement;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
