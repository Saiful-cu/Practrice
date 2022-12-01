#include<stdio.h>

int main()
{
    int num1,num2,gcd=1;

    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        for(int i=2;i<=num2;i++)
        {
            if(num1%i ==0 && num2%i ==0)
            {
                gcd = i;
            }
        }

    }
    else
    {
        for(int i=2;i<=num1;i++)
        {
            if(num1%i ==0 && num2%i ==0)
            {
                gcd = i;
            }
        }

    }
    printf("%d",gcd);
}
