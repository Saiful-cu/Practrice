#include<iostream>
using namespace std;

void findArray(int n)
{
    int arr[100000];
    arr[1] = 2;
    int i=1;

    if(n==1)
        cout<<1;


    else
    {
         n = n-1 ;
         cout<<arr[i]<<" ";
        while(n>0)
        {
            i++;
            arr[i] = arr[i-1]+1;
            if(arr[i]%arr[i-1] !=0)
            {
                cout<<arr[i]<<" ";
                n--;
            }
        }
    }
}

int main()
{
    int testCase,n;
    cin>>testCase;

    for(int i=0;i<testCase;i++)
    {
        cin>>n;
        findArray(n);
        cout<<endl;
    }

    return 0;
}
