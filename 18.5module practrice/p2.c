#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<2*n-i;j++)
        {
            if(i+j <=n-1)
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }

    return 0;
}
