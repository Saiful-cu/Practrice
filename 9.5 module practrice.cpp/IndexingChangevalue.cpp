#include<vector>
#include<iostream>
using namespace std;

int main()
{
    int num,value,NumberOfChange,index;
    vector<int> arr;

    cin>>num;

    for(int i=0;i<num;i++)
    {
        cin>>value;
        arr.push_back(value);
    }
    cin>>NumberOfChange;

    for(int i=0;i<NumberOfChange;i++)
    {
        cin>>index>>value;
        arr[index] = arr[index] + value;
    }
    for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
