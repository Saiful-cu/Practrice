#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    char str[10000],str1[10000];
    cin>>str;

    int len=0,a=0,p=0;
    len = strlen(str);
    //cout<<len;

    for(int i=0;i<len;i++)
    {
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'E' || str[i] == 'e' || str[i] == 'i' || str[i] == 'I' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u'|| str[i] == 'Y' || str[i] == 'y')
        {
            p =1;
        }
        else{
            str1[a]='.';
          if(str[i] < 97)
          {
              str[i] = str[i]+32;
               str1[a+1] = str[i];
          }
          else{
             str1[a+1] = str[i];
          }
          a = a+2;
        }

        //cout<< str <<"  "<<len <<endl;
    }
 cout<< str1 ;
    return 0;
}
