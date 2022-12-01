#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    long long int length,anton=0,danik=0;
    cin>>length;
    char str[100000];
    cin>>str;

    for(int i=0;i<length;i++)
    {
        if(str[i] == 'A')
        {
            anton +=1;
        }
        else
        {
            danik +=1;
        }
    }
    if(anton>danik)
    {
        cout<<"Anton"<<endl;
    }
    else if(danik > anton)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }


    return 0;
}
