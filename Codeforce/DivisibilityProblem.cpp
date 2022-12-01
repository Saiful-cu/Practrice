#include<iostream>
using namespace std;

int main()
{
    long long int t,n=0,a,b;

    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        n=0;
        if(a%b !=0)
         n = b-(a%b);
        cout<<n<<endl;
    }
}
