#include<iostream>
using namespace std;

int  print(int n,int i)
{
    int sum =0;
    if(n<i)
        return 0;

        sum = print(n,i+1);

    return sum+i;
}
int main()
{
    int n;
    cin>>n;
   int sum = print(n,1);
   cout<<sum;
    return 0;
}
