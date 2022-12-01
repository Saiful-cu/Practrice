#include<iostream>
using namespace std;
#include<math.h>

int main()
{
    int testCase,arr[500];
    cin>>testCase;

    for(int i =0; i<testCase; i++)
    {
        int n,maxvalue;
        cin>>n>>maxvalue;
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
        }
        for(int j=0; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(arr[j]>arr[k])
                    swap(arr[j],arr[k]);}}
        int m=0;

        for(int j=0; j<n; j++)
        {
            if(arr[j]>maxvalue)
            {
                arr[j] = arr[0]+arr[1];
                if(arr[j]>maxvalue)
                {
                    cout<<"No"<<endl;
                    m =1;
                    break;
                }
            }
        }
        if(m ==0)
            cout<<"Yes"<<endl;

    }


    return 0;
}
