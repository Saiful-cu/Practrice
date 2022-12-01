#include<iostream>
using namespace std;

int main()
{
    int n,arr[100],sum =0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

        sum += (arr[i]/1000)+(arr[i]%10);
    }
    cout<<sum;

    return 0;
}
