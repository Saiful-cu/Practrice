#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

     if(n%4 == 7)
    {
         for(int i=1;i<=n/4;i++)
        {
            cout<<4;
        }
        cout<<7;
    }
    else if(n%7 == 4)
    {
        for(int i=1;i<=n/7;i++)
        {
            cout<<7;
        }
        cout<<4;
    }
    else if(n%7==0)
    {
        for(int i=1;i<=n/7;i++)
            cout<<7;
    }
    else if(n%4==0)
    {
        for(int i=1;i<=n/4;i++)
            cout<<4;
    }

    else
    {
       cout<<-1;
    }

    return 0;
}
