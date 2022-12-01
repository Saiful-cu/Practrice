#include<stdio.h>

void pattern(int n);

int main()
{
    int n;
    scanf("%d",&n);
    pattern(n);

    return 0;
}

void pattern(int n)
{
    for(int i=0;i<n;i++)
    {
        int true =0;
        for(int j=0;j<(2*n-i-1);j++)
        {
            if(i == j)
                true =1;
            if(true == 1)
                printf(" *");
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
