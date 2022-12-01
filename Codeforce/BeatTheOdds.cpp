#include<iostream>
using namespace std;

int main()
{
    long long int testCase,n,arr[100000];

    cin>>testCase;
    for(int i=0;i<testCase;i++)
    {
        int sum =0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++)
        {

                if(arr[i]%2 ==0 && arr[i+2]%2 ==0 && arr[i+1]%2 !=0)
                {
                    sum +=1;
                    i++;
                }
                else if(arr[i]%2 !=0 && arr[i+2]%2 !=0 && arr[i+1]%2 ==0)
                {
                    sum +=1;
                    i++;
                }

        }

            cout<<sum<<endl;
    }

    return 0;
}
