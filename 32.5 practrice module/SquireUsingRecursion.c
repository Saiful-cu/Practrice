#include<stdio.h>

int power(int n, int pow,int p)
{
    while(pow!=0)
    {
        n = n*p;
        pow -=1;
        power(n,pow,p);
    }
    return n;
}

int main()
{
    int n,pow;

    scanf("%d %d",&n,&pow);

    n = power(n,pow-1,n);
    printf("%d",n);


    return 0;
}
