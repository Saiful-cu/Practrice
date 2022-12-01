#include<iostream>
using namespace std;

int main()
{
    int weight1,weight2,year=0;

    cin>>weight1>>weight2;

    while(weight1 <= weight2)
    {
        weight1 = weight1 * 3;
        weight2 = weight2 *2;
        year += 1;
       // printf("w1 : %d , W2: %d\n",weight1,weight2);
    }
    printf("%d",year);
    return 0;
}
