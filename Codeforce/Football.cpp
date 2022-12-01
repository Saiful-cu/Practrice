#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    char str[100];
    cin>>str;

    int count=1,count1=0;

    int length = strlen(str);

    for(int i=1; i<length; i++)
    {
        if(count == 7)
        {
            break;
        }
        if(str[i-1] == '0')
        {
            if(str[i] == str[i-1] )
            {
                count +=1;

            }

            else
                count = 1;
        }
        else
        {
            if(str[i] == str[i-1] )
                count +=1;
            else
                count = 1;
        }


    }
    if(count >= 7 )
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
