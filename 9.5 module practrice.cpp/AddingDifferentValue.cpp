#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int num,value,checkValue,result=0,breakPoint =0;
    vector<int >arr;
    cin>>num;

    for (int i=0;i<num;i++)
    {
        cin>>value;
        arr.push_back(value);
    }
    cin>>checkValue;

    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            if(i != j)
            {
                result = arr[i] + arr[j];
                if(result == checkValue)
                {
                    cout<<"Yes";
                    breakPoint =1;
                    break;
                }

            }
        }
        if(breakPoint == 1)
        {
            break;
        }
    }
    if(breakPoint == 0)
    {
        cout<<"No";
    }

    return 0;
}
