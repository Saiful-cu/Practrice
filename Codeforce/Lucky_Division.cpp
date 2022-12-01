#include<iostream>
using namespace std;

int main()
{
    long long int number,length=0;

    cin>>number;

    int    newNumber = number;
    if(newNumber == 799)
    {
        cout<<"YES";
    }
    else{
        if(newNumber%4== 0 || newNumber%7==0)
    {
        cout<<"YES";
    }
    else
    {
        while(newNumber>0)
        {
            if(newNumber%10 == 4 )
            {
                length = 0;
                //cout<<length<<endl;
            }
            else if(newNumber%10 == 7)
            {
                length =0;
            }
            else{
                length = 1;
                break;
            }
            newNumber = newNumber/10;
           // cout<<newNumber<<endl;
        }
        if(length == 1)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }

    }
    }



    return 0;
}
