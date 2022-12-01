#include <iostream>
using namespace std;

void equilateral(long long int arr[] ,long long int n);

int main()
{
    long long int t,n,arr[100000];
    cin>> t;
    for(int i=0; i<t; i++)
    {
        cin>> n;
        for(int j=0; j<n; j++)
        {
            cin>> arr[j];
        }
        equilateral(arr,n);
    }


    return 0;
}
void equilateral(long long int arr[] ,long long int n)
{
    long long int temp=0,sum=0;

        sum =0;
        for(int k=0; k<n; k++)
        {
            for(int l=k+1; l<n; l++)
            {
                if(arr[k] > arr[l])
                {
                    swap(arr[l],arr[k]);
                }
            }
        }

         for(int i=0;i<n-2;i++)
         {

             int diff = arr[i+2] - arr[i];
             if(diff<0)
                diff = -(diff);


             if(i==0)
                sum = diff;
             if(sum>diff)
                sum = diff;
         }


        cout << sum <<"\n";
    }

