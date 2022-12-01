#include<iostream>
using namespace std;

int main()
{
    long long int Number , Number_Operation;

    cin>>Number;
    cin>> Number_Operation;


    for(int i=0;i<Number_Operation;i++)
    {
        if(Number%10 == 0)
        {
            Number = Number/10;
        }
        else if(Number %10 !=0)
        {
            Number = Number -1;
        }
    }
    cout << Number;

    return 0;
}
