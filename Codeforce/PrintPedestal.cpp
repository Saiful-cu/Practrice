#include<iostream>
using namespace std;

int main()
{
    long long int testCase,n;
    cin>>testCase;
    for(int i=0;i<testCase;i++)
    {
        cin>>n;
       long long int h1,h2,h3;
       long long  int avg = n/3;
        long long int mod = n%3;
        h1 = avg;
        h2 = avg+1;
        h3 = avg-1;


        if(mod>1)
        {
            h2 += mod-1;
            h1 += 1;
        }
        else
            h2 += mod;
        cout<<h1<<" "<<h2<<" "<<h3<<endl;

    }


    return 0;
}
