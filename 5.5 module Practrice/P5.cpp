#include<iostream>
using namespace std;

int main()
{
    int Number,divisior;

     cin>>Number;

     cout<<1<<" ";

        for(int j=2;j<=(Number/2);j++)
        {
            if(Number%j ==0)
            {
                cout<<j<<" ";
            }
        }
        cout<<Number <<endl;




    return 0;
}

