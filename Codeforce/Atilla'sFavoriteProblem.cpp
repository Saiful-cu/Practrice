#include<iostream>
using namespace std;

int main()
{
    int testCase,n,maximum=0;
    char str[110];

    cin>>testCase;
    for(int i=0;i<testCase;i++)
    {
        maximum =0;
        cin>>n;
        cin>>str;
        maximum = str[0]-96;
        for(int i=1;i<n;i++)
        {
            if(str[i]-96 > maximum)
            {
                 maximum = str[i]-96;
            }

            //cout<<maximum<<endl;
        }
        cout<<maximum<<endl;
    }

    return 0;
}
