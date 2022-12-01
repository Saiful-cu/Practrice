#include<stdio.h>

float avg(int *a,int *b);

int main()
{
    int  a ,b;
    scanf("%d %d",&a,&b);
    int * p =&a;
    int* q =&b;


    float avarage = avg(&a ,&b);
    printf("%f",avarage);
}

float avg(int *a, int *b)
{
    float avg = (*a + *b)/2.0;
    return avg;
}
