#include<iostream>
using namespace std;

int main()
{
    long long int n,ans=0;
    char str[100];
    cin>>n; // number of inputs
    for(int i=0;i<n;i++)
    {
        cin>>str;
        if(str[0] == 'T')
        {
            ans +=4;
            //cout<<ans<<endl;
        }

        else if(str[0] == 'C')
        {
            ans +=6;
            //cout<<ans<<endl;
        }

        else if(str[0] == 'O')
        {
            ans +=8;
            //cout<<ans<<endl;
        }

        else if(str[0] == 'D')
        {
            ans +=12;
           // cout<<ans<<endl;
        }

        else
        {
            ans += 20;
            //cout<<ans<<endl;
        }


    }
    cout<<ans<<endl;

    return 0;
}
