#include<iostream>
using namespace std;

int LCM(long long int x, long long int y);
void minimum_LCM(long long int n);

int main()
{
    long long int testCase,n;

    cin>>testCase;

    for(int i=0;i<testCase;i++)
    {
        cin>>n;
        minimum_LCM(n);
    }

    return 0;
}

void minimum_LCM(long long int n)
{

    long long int value,x=1,y=n-1;
    long long int value1 = LCM(x,y);
    for(int i=2,j=n-2;i<=n/2;i++,j--)
    {
        value = LCM(i,j);
        if(value1>value){
            value1 = value;
            x = j;
            y = i;
        }


    }
    cout<<x<<" "<<y<<endl;

}
int LCM(long long int x,long long int y)
{
    if(y%x == 0)
        return y;
    else
        return x*y;

}
