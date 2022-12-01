#include<iostream>
using namespace std;

int main()
{
    int Number;

     cin>>Number;
     if(Number>0)
     {
         for(int j=1;j<=Number;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;

     }
     else if(Number<0){
            for(int j=1;j>=Number;j--)
            {
                cout<<j <<" ";

            }
            cout<<endl;

     }




    return 0;
}
