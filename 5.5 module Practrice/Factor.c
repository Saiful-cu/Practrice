#include<stdio.h>

int main()
{
    int num,arr[1000];

    scanf("%d",&num);
    arr[0] = 1;
    arr[num-1]= num;

    for(int i=1;i<=num;i++)
    {
        if(num%i ==0)
        {
            printf("%d ",i);
        }
    }

    return 0;
}
