#include<stdio.h>

void swap(int* s, int* t)
{
    int temp;
    temp = *s;
    *s = *t;
    *t = temp;
}

int main()
{
    int n,arr[1000];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int numberOfTest,index1,index2;
    scanf("%d",&numberOfTest);

    for(int i=0;i<numberOfTest;i++)
    {
        scanf("%d %d",&index1,&index2);
        swap(&arr[index1],&arr[index2]);
    }

    for(int i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
