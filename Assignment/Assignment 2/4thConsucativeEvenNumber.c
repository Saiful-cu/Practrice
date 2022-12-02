#include<stdio.h>

void ConsucativeEvenNumber(int n);

int main()
{
    int testCase,n;

    scanf("%d",&testCase);
    for(int i=0;i<testCase;i++)
    {
         scanf("%d",&n);
         ConsucativeEvenNumber(n);
         printf("\n");

    }


    return 0;
}

void ConsucativeEvenNumber(int n)
{
    int v1,v2,v3,v4;

    v3 = n/4 + 1;
    v2 = v3 -2;
    v1 = v2-2;
    v4 = v3+2;
    printf("%d %d %d %d",v1,v2,v3,v4);
    return 0;
}
