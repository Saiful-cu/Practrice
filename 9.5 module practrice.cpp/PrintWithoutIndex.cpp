#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int num, value;
    vector<int > arr;

    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>value;
        arr.push_back(value);
    }
    for(int i=0;i<num;i++)
    {
        cout<< i+1<<"- " ;
        for(int j=0;j<num;j++)
        {
            if(i != j)
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
