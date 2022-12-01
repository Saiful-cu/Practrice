#include<iostream>
using namespace std;

int main()
{
   long long int testCase,TotalIcream,n,coun=0;
    cin>>testCase>>TotalIcream;

    char c;
    for(int i=0;i<testCase;i++)
    {
        cin>>c;
        cin>>n;
        if(c == '+')
            TotalIcream +=n;
        else if(c == '-')
            if(TotalIcream>=n)
              TotalIcream -=n;
              else
                coun++;

    }
    cout<<TotalIcream<<" "<<coun<<endl;
}
