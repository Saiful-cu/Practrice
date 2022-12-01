#include<iostream>
using namespace std;

#include<string.h>

int main()
{
    char str[1000];
    int leng;

     cin>>str;
     leng = strlen(str);
    // cout<<leng;
     for(int i=0;i<leng-1 ;i+=2)
     {
         for(int j=i+2;j<leng;j+=2)
         {
             if(str[i] > str[j])
             {
                 swap(str[i],str[j]);
             }
            // cout<<str<<endl;
         }
     }
     cout<<str;

    return 0;
}
