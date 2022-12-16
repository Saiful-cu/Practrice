#include<stdio.h>
#include<math.h>

int  ReverseArray(int a,int arr[])
{
    int i=0;
    while(a>0)
    {
        arr[i] = a%10;
        a /= 10;
        i++;
    }
return i;
}
int main()
{
    int n,a,arr[100000];


    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        int x =ReverseArray(a,arr);
        for (int i=0;i<x;i++)
        {
            printf("%c",arr[i]+64);
        }
        printf("\n");
    }

    return 0;
}

