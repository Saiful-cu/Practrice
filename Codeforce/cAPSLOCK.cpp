#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    int n,arr[104],FirstS=0,SecondB=0;
    char str[104];

    cin>>str;
    n = strlen(str);

    if(n==1)
    {
        if(str[0]>96)
            FirstS=1;
    }

    for(int i=1;i<n;i++)
    {
        if(str[0]>=97)
            FirstS =1;
        if(str[i]<97)
        {
            SecondB +=1;
        }
    }
    if(FirstS ==1 && SecondB == n-1)
    {
        str[0] = str[0]-32;
        for(int i=1;i<n;i++)
        {
            str[i] = str[i]+32;
        }
    }
    else if(FirstS ==0 && SecondB == n-1)
    {
        for(int i=0;i<n;i++)
            str[i] = str[i]+32;
    }

    printf("%s",str);
}
