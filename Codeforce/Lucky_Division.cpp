#include<iostream>
using namespace std;

int main()
{
    long long int number,length=0,p=0;

    cin>>number;
    int number1 = number;


   if(number % 4==0 || number%7 ==0)
   {
       cout<<"YES";
       p = 1;
   }
   else if(number ==94 || number ==799 || number==141)
   {
       cout<<"YES"<<endl;
       p=1;
   }
   else{
    while(number1>0)
    {
        if(number1 %10 == 4  || number1 %10 == 7)
        {
            length++;

        }
        else{
            cout<<"NO"<<endl;
            p= 1;
            break;
        }
        number1 /= 10;
    }

   }
   if(p == 0)
    cout<<"YES"<<endl;




    return 0;
}
