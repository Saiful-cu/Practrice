#include<stdio.h>

int main()
{
    long long int num;

    scanf("%lld",&num);
    printf("%lld ",num);
    while(num>1)
    {

        if(num%2==0)
        {
            num = num/2;
        }
        else{
            num = num*3 + 1;
        }printf("%lld ",num);


    }
    return 0;
}
