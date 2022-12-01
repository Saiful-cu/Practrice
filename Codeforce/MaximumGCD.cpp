#include<iostream>
using namespace std;

int gcd(int n1,int n2)
{
    int gcd;
    for(int i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    return gcd;
}

int main()
{
    int testCase,n,r1,r2;
    cin>>testCase;

    for(int i=0;i<testCase;i++)
    {
        cin>>n;
         r1= 1;
        for(int j=2;j<=n;j++)
        {
            r2 = gcd(j);
           if(r1<r2)
            r1 = r2;

        }

        cout<<r1<<endl;
    }


    return 0;
}
