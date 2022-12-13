#include<stdio.h>

int power(int n, int pow)
{
   if(pow == 0)
   {
       return 1;
   }
   return n*power(n,pow-1);

}

int main()
{
    int n,pow;

    scanf("%d %d",&n,&pow);

    n = power(n,pow);
    printf("%d",n);


    return 0;
}
