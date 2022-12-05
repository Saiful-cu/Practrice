#include<iostream>
using namespace std;

int main()
{
    long long int arr[100005],n,change=0,fail=0,Note1=0,Note2 =0,Note3=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    for(int i=1;i<=n;i++)
    {
        if(arr[i]==25)
        {
            change+=25;
            Note1 +=1;
        }
        else if(arr[i]==50)
        {
            if(change >=25 && Note1>=1)
            {
                change+=25;
                Note1 -=1;
                Note2 +=1;
            }
            else
            {
                cout<<"NO"<<endl;
                fail =1;
                break;
            }
        }
        else{
            if(change>=75 && Note2 >=1 && Note1>=1)
            {
                change +=25;
                Note1 -=1;
                Note2 -=1;
            }
            else if(change>=75 && Note1 >=3)
                    {
                        change +=25;
                        Note1 -=3;
                    }

            else
            {
                cout<<"NO"<<endl;
                fail =1;
                break;
            }

        }
    }
    if(fail ==0)
        cout<<"YES"<<endl;

}
