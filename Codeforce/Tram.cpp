#include<iostream>
using namespace std;

int main()
{
    int testCase,exit,enter,total=0,stay=0;
    cin>>testCase;

    for(int i=0;i<testCase;i++)
    {
        cin>>exit>>enter;

        stay -= exit;
        stay += enter;

        if(total<stay)
            total = stay;


    }
    cout<<total;

    return 0;
}
