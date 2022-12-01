#include<iostream>
using namespace std;

int main()
{
   long long  int numberOfBooks,times,BookT[100000]={0},sum=0;
    cin>>numberOfBooks>>times;

    for(int i=0;i<numberOfBooks;i++)
    {
        cin>>BookT[i];
    }
    for(int i=0;i<numberOfBooks-1;i++)
    {
        for(int j=i+1;j<numberOfBooks;j++)
        {
            if(BookT[i]>BookT[j])
                swap(BookT[i],BookT[j]);
        }
    }
    int i=0;
    while(i<numberOfBooks)
    {
        if(BookT[i]<= times)
        {
            sum +=1;
            times = times-BookT[i];

        }
        else
            break;
        i++;
    }
    cout<<sum<<endl;

    return 0;
}
