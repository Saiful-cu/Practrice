#include<iostream>
using namespace std;

int main()
{
    int Number,divisior;

     cin>>Number;
     cin>>divisior;
        for(int j=1;j<=Number;j++)
        {
            if(j%divisior ==0)
            {
                cout<<j<<" ";
            }
        }
        cout<<endl;




    return 0;
}
