#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sort(long long int arr[],long long n)
{

    int temp,a=0,b=0;
    a = arr[0];
     b = arr[0];
    for(int i=0;i<n;i++)
    {

        if(a<0)
            a = -a;


        if (b<0)
            b = -b;
            if(a<arr[i])
            {

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                if(arr[i]<0)
                    a = -arr[i];
                else
                    a = arr[i];
            }
        }

    }
}

int main() {

   long long  int testcase, arr[10001],n;
    scanf("%lld",&testcase);

    for(int i=0;i<testcase;i++)
    {
        scanf("%lld",&n);
        for(int j=0;j<n;j++)
        {
            scanf("%lld",&arr[j]);
        }
        sort(arr,n);
          printf("%lld %lld ",arr[n-1]*arr[n-1],arr[0]*arr[0]);
          if(arr[n-1]<a[0])
          {
              printf("%lld %lld\n",arr[0]+arr[0],arr[n-1]+arr[n-1]);
          }
          else
            printf("%lld %lld\n",arr[n-1]+arr[n-1],arr[0]+arr[0]);

    }
    return 0;
}
