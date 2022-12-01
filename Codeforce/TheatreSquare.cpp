#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    unsigned long long n,m,a,value;
    cin>>n>>m>>a;
    value= ceil((double)m/a)*ceil((double)n/a);
    cout<<value ;
    return 0;
}
