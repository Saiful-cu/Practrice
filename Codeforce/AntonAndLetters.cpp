#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    int len,arr[100] = {0},value,cont =0;
    char str[2000];

    cin>>str;    //input as a string
    len = strlen(str);  // find the length of string
    cout<<len;

    for(int i=1; i<len;i+=2)
    {

            value = str[i] - 97; // find the character serial number
            arr[value] = 1;  // position arr[value] initialize by 1
            cout<<str[i]<<" " <<value<<endl;



    }

    for(int i=0; i<26; i++)
    {
        if(arr[i] == 1)
            cont++;
    }


    return 0;
}
