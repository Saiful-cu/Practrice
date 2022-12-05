#include<iostream>
using namespace std;

int sorting(long long int arr[],long long int n);
int is_multiple(long long int arr[],long long int n,int index);

int main()
{
    long long int n,arr[100000];

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int ans = sorting(arr,n);
    //cout<<ans<<endl;
    if(1 == is_multiple(arr,n,ans))
    {
        cout<<"Still Rozdil";
    }
    else
        cout<<ans;

    return 0;

}
int sorting(long long int arr[],long long int n)
{
    long long int small= arr[1];
    int index = 1;

        for(int j=2;j<=n;j++)
        {
            if(small>arr[j]){
                    small = arr[j];
                 index = j;
            }

        }
    return index;
}
int is_multiple(long long int arr[],long long int n,int index)
{
    int ans = 0;
    long long int value = arr[index];
    for(int i=1;i<=n;i++)
    {
        if(arr[i] == value)
        {
             ans +=1;
        }

    }
   //cout<<value<<endl;
    if(ans>1)
        return 1;
    else
        return 0;
}

