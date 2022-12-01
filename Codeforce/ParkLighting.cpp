#include<iostream>
using namespace std;

int main()
{

    int testCase,row,column,ans,value;
    cin>>testCase;
    for (int i=0;i<testCase;i++)
    {
        cin>>row>>column;
        value = row*column;
        if(value%2 ==0)
            ans = value/2;
        else
            ans = value/2 + 1;
        cout<<ans<<endl;
    }
}
