#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    int n,counts =0;
    char str[104];
    cin>>n;
    cin>>str;

    for(int i=0;i<n-2;i++)
    {
        if(str[i] =='x'&& str[i+1] == 'x' && str[i+2] == 'x')
        {
            counts +=1;
        }
    }
 cout<<counts<<endl;
    return 0;
}
