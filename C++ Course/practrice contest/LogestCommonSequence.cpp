#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len,counting=1,ans=1;
    string s;
    cin>>s;

    len = s.size();

    for(int i=1;i<len ;i++ )
    {
        if(s[i] == s[i-1])
        {
            counting +=1;
        }
        else
            counting = 1;
        if(counting >ans)
            ans = counting;
    }
    cout<<ans;

    return 0;
}
