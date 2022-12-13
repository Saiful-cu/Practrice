#include<iostream>
using namespace std;

void print(int n,int i)
{
    if(n!=i)
    {
        print(n,i+1);
    }

    cout<<i<<" ";
}
int main()
{
    int n;
    cin>>n;
    print(n,1);
    return 0;
}
