#include<iostream>
using namespace std;

int main()
{
    int n,arr[205],testCase;

    cin>>testCase;
    for(int j=0;j<testCase;j++)
    {
        cin>>n;
        for(int i=0;i<n*2;i++)
        {
            cin>>arr[i];
        }
        int odd=0,even=0;
        for(int i=0;i<n*2;i++)
        {
            if(arr[i]%2 == 0)
                even++;
            else if(arr[i]%2 == 1)
                odd++;


        }
        if(even == odd)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}
