#include<stdio.h>


int main()
{
    int arr[1000],n,key;
    scanf("%d %d",&n,&key);
    int j=1;
    for(int i=2;i<=n;j++)
    {
        arr[j]=i;
        printf("%d ",arr[j]);
        i+=2;

    }
    for(int i=1;i<=n;j++)
    {
        arr[j] =i;
        printf("%d ",arr[j]);
        i+=2;
    }
    printf("\nThe %dth element in this sequence is %d.",key,arr[key]);



    return 0;
}
