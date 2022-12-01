#include<iostream>
using namespace std;

int main()
{
    long long int testCase,NumberOfBlock;

    cin>>testCase;
    for(int i=0;i<testCase;i++)
    {
        cin>>NumberOfBlock;
        if(NumberOfBlock%2 == 0)
        {
            cout<<NumberOfBlock/2<<endl;
        }
        else{
            cout<<(NumberOfBlock+1)/2<<endl;
        }
    }

}
