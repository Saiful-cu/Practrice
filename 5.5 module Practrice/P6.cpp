#include<iostream>
using namespace std;

int main()
{
    int StartNumber,EndNumber;

    cin>>StartNumber;
    cin>>EndNumber;
    int endstation = StartNumber+EndNumber;


    if(endstation>23)
    {
        for(int j=StartNumber; j<=endstation; j++)
        {
            cout<<j<<" ";
            if(j ==23)
            {
                j =-1;
                endstation = EndNumber;
            }
        }
    }
    else
    {
        for(int i=StartNumber; i<= EndNumber; i++)
            cout<<i<<" " ;
    }

    cout<<endl;




    return 0;
}

