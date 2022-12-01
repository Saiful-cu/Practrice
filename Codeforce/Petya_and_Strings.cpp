#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    char st[105], st1[105];
    cin>> st;
    cin>> st1;

    int len =0,result =0;
    len = strlen(st);

    for(int i=0; i<len; i++)
    {
        if(st[i] < 97)
        {
            st[i] = st[i] + 32;
        }
        if(st1[i]<97)
        {
            st1[i] = st1[i] +32;
        }

    }


for(int i=0;i<len;i++)
{

    if(st[i] < st1[i])
    {
        result = -1;
        break;
        //cout<<st<<" " <<st1<<endl;
    }
    else if(st1[i] < st[i])
    {
        result = 1;
        break;
    }

    else
    {
        result = 0;
        // cout<<st<<" " <<st1<<endl;
    }

}

cout<<result;


    return 0;
}
