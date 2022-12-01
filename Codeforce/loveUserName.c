#include<stdio.h>
int main()
{
    long long int ara[100000],a,i,j,b,c=0,d,e,f,g,h,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld",&ara[i]);


    }
    if(n>1)
    {

        a=ara[0];
    b=ara[1];
    if(a>b)
    {
         c=1;
        for(i=2; i<n; i++)
        {

            if(ara[i]>a)
            {
                a= ara[i];
              //  printf("%lld",a);
                c++;
            }
            if(ara[i]<b)
            {
             b=ara[i];
            // printf("%lld0\n",b);
               c++;
            }

        }

    }
    else if(a<b)
        {
            c=1;

        for(i=2; i<n; i++)
        {

            if(ara[i]<a)
            {
                a= ara[i];
                //printf("%lld",a);
                c++;
            }
            if(ara[i]>b)
            {
             b=ara[i];
            // printf("%lld0\n",b);
               c++;
            }

        }

        }
        printf("%lld",c);

    }
    if(n==1)
    {
        c=0;
        printf("%lld",c);
    }


}

