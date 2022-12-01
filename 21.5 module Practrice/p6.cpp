#include<iostream>
using namespace std;
#include<cmath>

void divisior(int n,int q);

int main()
{
    int n;
    cin>>n;

    int sqr = sqrt(n);
    cout<<sqr<<endl;
    divisior(sqr,n);


    return 0;
}

void divisior(int n,int q)
{
    cout<<1<<" ";

    for(int i=2;i<=n;i++)
    {

        if(q%i == 0)
           {
               cout<<i<<" "<<q/i<<" ";
           }
    }
    cout<<q<<endl;
}
