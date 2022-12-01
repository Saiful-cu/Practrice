#include<iostream>
using namespace std;

int main()
{
    long long int n,ans=0;
    cin>>n;

    while(n>0)
    {
        if(n>=100)
        {
            ans +=(n/100);
            n = n%100;
        }
        else if(n >=20)
        {
               ans +=(n/20);
               n = n%20;
        }
        else if(n>=10)
        {
            ans+=(n/10);
            n = n % 10;
        }
        else if(n>=5)
        {
            ans +=(n/5);
            n = n%5;
           // cout<<ans<<" "<<n<<endl;
        }
        else{
            ans += (n/1);
            n=0;
        }
    }
 cout<<ans;

    return 0;
}
