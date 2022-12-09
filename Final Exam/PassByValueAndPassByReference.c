#include<stdio.h>

void pass_by_value(int a,int b)
{
    int temp = b;
     b = a;
    a = temp;
}
void pass_by_reference(int *p,int *q)
{

    int temp = *q;
    *q = *p;
    *p = temp;
}

int main()
{
    int a = 100,b=200;
    int* p = &a;
    int* q = &b;

    pass_by_value(a,b);
    printf("%d %d\n",a,b);

    pass_by_reference(&a,&b);
    printf("%d %d\n",a,b);

    return 0;
}
