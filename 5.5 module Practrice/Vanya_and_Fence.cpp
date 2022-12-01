#include<iostream>
using namespace std;

int main()
{
    int Number_of_Person,FenceHeight,AreaNeed=0,personHeight;

    cin>>Number_of_Person>>FenceHeight;

    for(int i=0; i<Number_of_Person;i++)
    {
        cin>>personHeight;
        if(personHeight <= FenceHeight)
        {
            AreaNeed += 1;
        }
        else
        {
            AreaNeed += 2;
        }
    }
    cout<<AreaNeed;

    return 0;
}
