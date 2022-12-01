#include<iostream>
using namespace std;
#include<algorithm>

int main()
{
    long long int TestCase,a,b,c;
    cin>>TestCase;

    for(int i=0;i<TestCase;i++)
    {
        cin>>a>>b>>c;
       long long int maxi = max(a,b);
        maxi = max(maxi,c);
       long long int mini = min(a,b);
        mini = min(mini,c);

        if(a != maxi && a!=mini)
            cout<<a<<endl;
        else if(b != maxi && b!= mini)
            cout<<b<<endl;
        else
            cout<<c<<endl;



    }

    return 0;
}
