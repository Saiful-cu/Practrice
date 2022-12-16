#include<stdio.h>

int main()
{
    int testCase,n,arr[10000],value;

    scanf("%d",&testCase);
    for(int i=1;i<=testCase;i++)
    {
        scanf("%d",&n);
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&arr[j]);
        }
        scanf("%d",&value);
        int a =0;
        for(int j=1;j<=n;j++)
        {
            if(value == arr[j]){
                printf("Case %d: %d\n",i,j);
                a=2;
                break;
            }
        }
        if(a==0)
            printf("Case %d: Not Found\n",i);
    }

    return 0;
}
