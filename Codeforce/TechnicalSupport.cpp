#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    int length,question=0,ans=0,testCase;
    char str[105];
    cin>>testCase;

    for(int i=0;i<testCase;i++)
    {
        cin>>length;
        cin>>str;
        question =0;
        ans =0;
        for(int j=0;j<length;j++)
        {
            if(str[j] == 'Q')
            {
                question +=1;

            }
            else{
                    if(question>0)
                    {
                        question -=1;
                    }
                    else
                      question =0;
            }
        }
      // cout<<ans<<" "<<question<<str[length-1]<<endl;
        if(question ==0 )
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }



    return 0;
}
