#include<iostream>
using namespace std;

int main()
{
    int numberOfLevel,FirstS,first[103],SecondS,second[103],final[103],value;
    cin>>numberOfLevel;
    cin>>FirstS;
    for(int i=1;i<=FirstS;i++)
    {
        cin>>first[i];
        value = first[i];
        final[value] = 1;
    }
    cin>>SecondS;
    for(int i=1;i<=SecondS;i++)
    {
        cin>>second[i];
        value = second[i];
        final[value] = 1;
    }
    value =0;
    for(int i=1;i<=numberOfLevel;i++)
    {
        if(final[i] != 1)
        {
            value=1;
        }
    }
    if(value == 1)
    {
        cout<<"Oh, my keyboard!";
    }
    else{
        cout<<"I become the guy.";
    }
    return 0;
}
