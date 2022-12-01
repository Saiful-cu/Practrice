#include<iostream>
using namespace std;

int main()
{
    long long int NumberOFMagnet;
    long long int newOne,OldOne=0,count =0;

    cin>>NumberOFMagnet;
    for(int i=0;i<NumberOFMagnet;i++)
    {
        cin>>newOne;
        if(newOne != OldOne)
        {
            count +=1;
        }
        OldOne = newOne;
    }
    cout<<count<<endl;


    return 0;
}
