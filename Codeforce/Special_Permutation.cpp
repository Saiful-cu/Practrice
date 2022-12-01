#include<iostream>
using namespace std;

int main()
{
    int testCase,number,arr[105],middle;

    cin>>testCase;
    for(int j=0;j<testCase;j++)
    {
        scanf("%d",&number);
        for(int i=0;i<number-1;i++)
        {
            arr[i] = 2+i;
        }
        arr[number-1] = 1;
        for(int i=0;i<number;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
