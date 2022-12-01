#include<iostream>
using namespace std;

int main()
{
    int n,value=0,ans=0;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>value;

        if(value>0)
        {
           ans = 1;
        }
    }
    if(ans == 0)
    {
        cout<<"EASY"<<endl;
    }
    else
    {
        cout<<"HARD"<<endl;
    }
    return 0;
}
