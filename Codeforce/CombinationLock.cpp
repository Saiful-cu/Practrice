#include<iostream>
using namespace std;
#include<math.h>

int main()
{
    int n,move1=0,move2=0,moves=0;
    char str[1000],str1[1000];

    cin>>n;
    cin>>str;
    cin>>str1;

    for(int i=0; i<n; i++)
    {
        int x = str[i]-48,y= str1[i]-48;
        //cout<<x;
        move1 = x-y;
        if(move1<0)
            move1 = -move1;
        if(x<y)
            move2 = x+(9-y+1);
        else
            move2 = 9-x+1+ y;
        //cout<<move1<<" "<<move2<<endl;

        moves += min(move1,move2);

    }
    cout<<moves<<endl;

    return 0;
}
