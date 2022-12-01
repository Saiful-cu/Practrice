#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    int testCase,NumberWheel,wheelPosition[105],NumberOfMove,change=0;
    char str[104];

    cin>>testCase;
    for(int k=0;k<testCase;k++)
    {
        cin>>NumberWheel;
    for(int i=0;i<NumberWheel;i++)
    {
        cin>>wheelPosition[i];
        //cout<<wheelPosition[i];
    }
    for(int i=0;i<NumberWheel;i++)
    {
        cin>>NumberOfMove;
        cin>>str;
        for(int j=0;j<NumberOfMove;j++)
        {
            if(str[j] == 'D' && wheelPosition[i] == 9)
            {
                wheelPosition[i] = 0;
            }
            else if(str[j] == 'U' && wheelPosition[i] == 0)
            {
                wheelPosition[i] = 9;
            }
            else if(str[j] == 'D')
            {
                wheelPosition[i] +=1;
            }
            else if(str[j] == 'U')
            {
                wheelPosition[i] -=1;
            }
            //cout<<wheelPosition[i]<<" ";
        }
        //cout<<endl;
     // cout<<wheelPosition[i]<<" ";
    }
    for(int i=0;i<NumberWheel;i++)
        cout<<wheelPosition[i]<<" ";
    cout<<endl;
    }



    return 0;
}
