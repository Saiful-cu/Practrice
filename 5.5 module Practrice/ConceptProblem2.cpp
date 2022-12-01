#include<iostream>
using namespace std;

int main()
{
    int Floor_no , Room_no,sum=0,value=0;
    cin>>Floor_no;
    cin>>Room_no;

    for(int i=1;i<=Floor_no;i++)
    {
        for(int j=1;j<=Room_no;j++)
        {
            value = (i * 100 )+ j;
            sum = sum + value;
        }
    }
    cout<<sum;
}
