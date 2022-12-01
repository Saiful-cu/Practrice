#include<iostream>
using namespace std;

void positiveToNegative(int n);

int main()
{
    int n;
    cin>>n;
    positiveToNegative(n);

    return 0;
}

void positiveToNegative(int n)
{
    int i=n;
    cout<<i<<" ";
    while(i != -n)
    {
        if(n>0)
        {
            cout<<i-1<<" ";
            i--;
        }
        else
        {
            cout<<i+1<< " ";
            i++;
        }
    }
}

