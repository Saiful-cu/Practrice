#include<iostream>
using namespace std;

int main()
{
    int n,arr[105]={0},value=0,cont=0;
    char str[104];

    cin>>n;
    cin>>str;

    if(n>=26)
    {
        for(int i=0;i<n;i++)
        {
            if(str[i] <97)
                str[i] = str[i]+32;

            value = str[i] - 97;
            arr[value] = 1;
           // cout<<value<<" "<<arr[value]<<endl;
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i] != 1)
            {
                printf("NO");
                cont = 2;
                break;
            }
        }
        if(cont != 2)
            printf("YES");
    }
    else{
        printf("NO");
    }


    return 0;
}
