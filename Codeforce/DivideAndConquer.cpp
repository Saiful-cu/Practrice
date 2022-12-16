#include<iostream>
using namespace std;
#include<math.h>



int main()
{
    long long int testCase,n,arr[100000];

    cin>>testCase;
    for(int i=0; i<testCase; i++)
    {
        int sum=0;
        cin>>n;
        for(int j=0; j<n; j++)
        {
            cin>>arr[j];
            sum +=arr[j];
        }
        if(sum%2 == 0)
        {
            cout<<0<<endl;
        }
        else
        {
            int sum1 ;

            int c =0,c1 =999999,r;

            for(int l=0; l<n; l++)
            {
                sum1 = sum,c=0;
                int a = arr[l];
                while(sum1%2 !=0)
                {
                    r = a;
                    a = a/2;
                    sum1 -= r - a;
                    c++;
                }
                if(c<c1)
                    c1 = c;
            }
            cout<<c1<<endl;
        }

    }
    return 0;
}
