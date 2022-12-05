
#include<iostream>
using namespace std;

int main()
{
    int testCase,n;

    cin>>testCase;

    for(int i=0; i<testCase; i++)
    {
        cin>>n;
        int divisior  = n%7;
        if(divisior!=0)
        {


            if(divisior<(7-divisior) && n-divisior>10)
            {
                n = n-divisior;
            }
            else
            {
                n = n+(7-divisior);
            }


        }
         cout<<n<<endl;
    }

    return 0;
}
