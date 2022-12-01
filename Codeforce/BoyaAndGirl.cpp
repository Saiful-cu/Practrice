#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    char str[1000];

    int len,a=0,coun =1;

    cin>>str;
    len = strlen(str);

    for(int i=0;i<len-1 ;i++)
    {
        a =0;
        for(int j=i+1;j<len;j++)
        {
            if(str[i] == str[j] )
            {
                a =1;
            }
        }
        if(a == 0)
        {
            coun +=1;
            //printf("count %d",coun);
        }
    }
     if(coun%2 ==0)
     {
         cout<<"CHAT WITH HER!";
     }
     else
     {
         cout<<"IGNORE HIM!";
     }

    return 0;
}
