#include<iostream>
using namespace std;

int main()
{
    int testCase, Number,midddle =0;
    cin>>testCase;

    for(int i=0; i<testCase ; i++ )
    {

        cin>> Number;
        if(Number>3)
        {
            if(Number %2 ==0)
            {
                midddle = Number/2;
                for(int i =0;i<= midddle-1;i++)
                {
                    cout<<midddle-i <<" " << Number-i <<" ";
                }
            }
            else{
                midddle = Number/2;
                midddle += 1;
                for(int i=0;i<midddle-1;i++)
                {
                    cout<<midddle-i <<" " << Number-i <<" ";
                }
                cout<<1;
            }
        }
        else{
            for(int i=1;i<=Number;i++)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
