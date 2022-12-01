#include<iostream>
using namespace std;

int main()
{
    long long int n,value,ans=0,v=0,divisor;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        ans += value;
    }
    divisor = ans%4;
    v = ans/4;
    if(divisor>0)
    {
        v +=1;
    }
    cout<<v;


    return 0;
}
