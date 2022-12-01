#include<iostream>
using namespace std;
#include<math.h>
#include<algorithm>

int main()
{
    int n,arr[103],maximum=0,minimum=0,max_index=0,min_index=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    maximum = arr[1];
    minimum = arr[1];
    max_index = 1;
    min_index =1;
    for(int i=2;i<=n;i++)
    {
        if(maximum<arr[i])
        {
            maximum = arr[i];
            max_index = i;
           // cout<<max_index<<" ";
        }
         if(minimum>=arr[i])
         {
             minimum = arr[i];
             min_index = i;
            // cout<<min_index<<" ";
         }
         //cout<<endl;
    }
    int totalChange =0;
    totalChange += max_index-1;
    if(max_index>min_index)
    totalChange += n- min_index-1;
    else
        totalChange +=n-min_index;
    cout<<totalChange;


    return 0;
}
