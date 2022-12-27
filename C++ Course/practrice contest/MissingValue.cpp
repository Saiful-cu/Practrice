#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
    long long int number_array,value,a=0 ,arr[200001]={0};


    cin >> number_array;
    for(int i=1; i<number_array; i++)
    {
        cin>>value;
        arr[value] = 1;

    }
    value =0;
    for(int i=1;i<=number_array;i++)
    {
        if(arr[i] != 1)
        {
            cout<<i;
        }
    }



    return 0;
}
