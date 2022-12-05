#include<iostream>
using namespace std;
#include<math.h>

int main()
{
    long long int arr[100000],n,cont =0,value;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cont =0;
        cin>>arr[i];

        value = sqrt(arr[i]);
        for(int j=2;j<=value;j++)
        {
            if(value%j ==0)
                cont+=2;
        }
        if(cont==3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }



    return 0;
}
