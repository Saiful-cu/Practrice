#include<iostream>
using namespace std;


int Is_distinct(int year);

int main()
{
    int year;
    cin>>year;
    year = year+1;

    while(1 != Is_distinct(year))
    {
        year +=1;
    }
    cout<<year;
}

int Is_distinct(int year)
{
    int arr[10] = {0,0,0,0,0,0,0,0,0,0};
    while(year>0)
    {
        arr[year%10] += 1;
        year /= 10;
    }
    for(int i=0;i<10;i++)
    {
        if(arr[i]>1)
            return 0;
    }

    return 1;
}
