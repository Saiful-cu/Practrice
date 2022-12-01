#include<iostream>
using namespace std;
#include<math.h>

int main()
{
    int testCase,arr[1000];
    cin>>testCase;

    for(int i =0; i<testCase; i++)
    {
        int n;
        cin>>n;
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
        }
        for(int j=0; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(arr[j]>arr[k])
                    swap(arr[j],arr[k]);
            }
        }
        int m=0;
        for(int j=0;j<n-1;j++)
        {
            if(arr[j] == arr[j+1])
            {
                m =1;
                cout<<"NO"<<endl;
                break;
            }

        }
        if(m==0)
            cout<<"Yes"<<endl;


    }
 return 0;
}

