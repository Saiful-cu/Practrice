#include<stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a,b;
    a=100,b=20;

    swap(&a,&b);
    printf("%d %d",a,b);

    return 0;
}
