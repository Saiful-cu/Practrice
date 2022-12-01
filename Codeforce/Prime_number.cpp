#include<iostream>
using namespace std;

int sqrt(int number);

int main()

{
    int number,a=0;
    cin>>number;
    int sqr_num= sqrt(number);

    for(int i=2;i<sqr_num;i++)
    {
        if(number%i == 0)
        {
            a = 5;
        }
    }
    if(a==0)
    {
        cout<<number<<" Is the prime number";
    }
    else{
        cout<<number << " is not prime number";
    }

}


int sqrt(int number)
{
     for(int i=1;i<number;i++)
     {
         if((i*i) == number)
         {
             return i;
         }
         else if((i*i)>number)
         {
             return i-1;
         }
     }

}
