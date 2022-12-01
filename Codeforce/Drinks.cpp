#include<iostream>
using namespace std;

int main()
{
    long long int n;
    float sum=0, value;
    float ans;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        sum = sum+value;
    }
    ans = sum/n;
    cout<<ans;

    return 0;
}
