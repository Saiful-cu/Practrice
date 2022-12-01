#include<iostream>
using namespace std;

int WithoutThree(int n)
{
    int i=1,ans=0;
    while(0<n)
    {
      if(i%3 !=0 && i%10 != 3)
      {
          n--;
          ans =i;
      }
      i++;
    }
    return ans;
}

int main()
{
    int testCase,value;
    cin>>testCase;

    for(int i=0;i<testCase;i++)
    {
        cin>>value;
        cout<<WithoutThree(value)<<endl;
    }
}
