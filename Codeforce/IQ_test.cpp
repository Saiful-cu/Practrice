#include<iostream>
using namespace std;

int main()
{
    int n, arr[105],arr1[104]={0};
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        arr1[i] = arr[i+1]-arr[i];
        if(i>1)
        {
            if(arr1[i] != arr1[i-1])
            {
                if(arr1[i-1] == (arr[i+2] - arr[i]))
                  cout<<i ;
            }
        }
       // cout<<arr1[i]<<endl;
    }
    for(int i=2;i<=n;i++)
    {
        //if(arr[i]%arr[1] !=0)
         // cout<<i<<endl;

    }


    return 0;
}
