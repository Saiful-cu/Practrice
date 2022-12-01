#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int num,value;
    vector<int>arr;

    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>value;
        arr.push_back(value);
    }
    for(int i=num-1;i>=0;i--)
    {

        cout<<arr[i]<<" ";
    }



    return 0;
}
