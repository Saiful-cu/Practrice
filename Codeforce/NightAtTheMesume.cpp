#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    int len,sum=0,first;
    char str[102],current ='a';
    cin>>str;
    len = strlen(str);

    for(int i=0; i<len; i++)
    {
        if(current<str[i])
            first = str[i]-current;
        else
            first = current-str[i];

        sum+= min((first),(26-first));
        current = str[i];

    }
    cout<<sum<<endl;
}
