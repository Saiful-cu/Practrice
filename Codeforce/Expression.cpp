#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10],a,b,c;

        cin>>a>>b>>c;
        arr[0] = a+b*c;
        arr[1] = a*(b+c);
        arr[2] = a*b*c;
        arr[3] = (a+b)*c;
        arr[4] = a+b+c;

        sort(arr,arr+5);

        cout<<arr[4];



    return 0;
}
