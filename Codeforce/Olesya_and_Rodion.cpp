#include<iostream>
using namespace std;

int main()
{
    long long int n,divisior,number=1;
    cin>>n>>divisior;
    if(n>divisior)
    number = divisior;

    for(int i=1;i<n;i++)
    {

        if(i>1)
        {
            number *= 10;
            number += divisior;
        }
        else
        {
            number *= 11;
        }
    }

        if(number%divisior==0)
            cout<<number;
        else
            cout<<-1;
    return 0;
}
