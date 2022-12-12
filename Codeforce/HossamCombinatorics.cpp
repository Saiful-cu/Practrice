#include<iostream>
using namespace std;
#include<math.h>

int sortA(long long int arr[],long long int n)
{
    int c=2,temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {

            if(arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";

    }
    return c;
}

int main()
{
    long long int testCase,n,arr[100000];

    cin>>testCase;
    for(int i=0; i<testCase; i++)
    {
        cin>>n;
        for(int j=0; j<n; j++)
        {
            cin>>arr[i];
        }
        int c = sortA(arr,n);
        //cout<<c*2<<endl;

    }



    return 0;
}
