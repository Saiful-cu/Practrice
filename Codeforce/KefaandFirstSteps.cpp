#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n ,arr[100000],value=1,value1=0,arr1[100000]={0};
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n-1;i++)
    {
        if(arr[i] <= arr[i+1])
        {
            value +=1;
        }
        else{
                if(value1<value)
                  value1 = value;
            value =1;
        }

    }
    if(value1<value)
        value1 =value;

    cout<<value1;
    return 0;
}
