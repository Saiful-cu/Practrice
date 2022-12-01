#include<iostream>
using namespace std;

int main()

{
    int testCase,n;
    cin>>testCase;

    for(int i=0;i<testCase;i++)
    {
        cin>>n;
        int ans =0;
        int last =0;
        while(n>ans)
        {
            last = ans;
            ans = 2*ans +1;
        }
        cout<<last<<endl;
    }

    return 0;
}
