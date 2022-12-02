#include<stdio.h>

int is_divisibleBy_3(int n);
int is_divisibleBy_5(int n);

int main()
{
    int n,arr[1000];

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum =0;
    for(int i=0;i<n;i++)
        {
            if(is_divisibleBy_3(arr[i]))
                sum +=1;
            else if(is_divisibleBy_5(arr[i]))
                sum+=1;
        }
        printf("%d",sum);

    return 0;
}

int is_divisibleBy_3(int n)
{
    if(n%3 ==0)
        return 1;
    return 0;
}
int is_divisibleBy_5(int n)
{
    if(n%5 ==0)
        return 1;
    return 0;
}
