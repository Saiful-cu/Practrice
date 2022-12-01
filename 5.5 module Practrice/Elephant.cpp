#include<iostream>
using namespace std;

int main()
{
    int length,letLength,NumOfStep =0;
    cin>>length;

    if(length>=5)
    {
        NumOfStep = length/5;
        letLength = length%5;

        if(letLength == 4)
        {
            NumOfStep += 1;
        }
        else if(letLength == 3)
        {
            NumOfStep += 1;
        }
        else if(letLength == 2)
        {
            NumOfStep += 1;
        }
        else if(letLength ==1)
        {
            NumOfStep += 1;
        }
    }
       else if(length == 4)
        {
            NumOfStep += 1;
        }
        else if(length == 3)
        {
            NumOfStep += 1;
        }
        else if(length == 2)
        {
            NumOfStep += 1;
        }
        else
        {
            NumOfStep += 1;
        }

        cout<<NumOfStep;

    return 0;
}
