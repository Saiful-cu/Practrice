#include<iostream>
using namespace std;

void printCorrect(long long int n,long long int arr[]);

int main()
{
    long long int testCase,n,arr[400];
    cin>>testCase;
    for(int i=0;i<testCase;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        printCorrect(n,arr);
        cout<<endl;
    }
    return 0;
}
void printCorrect(long long int n,long long int arr[])
{

    for(int i=0;i<n/2;i++)
    {
        cout<<arr[i]<<" "<<arr[n-1-i]<<" ";
    }
    if(n%2 != 0)
    {
        cout<<arr[n/2];
    }
    cout<<endl;

}
