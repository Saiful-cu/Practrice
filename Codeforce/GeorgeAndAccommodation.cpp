#include<iostream>
using namespace std;

int main()
{
    int numberOfRoom,Capacity,AlreadyBooked;
    int count =0,freeSpace;

    cin>>numberOfRoom;
    for(int i=0;i<numberOfRoom;i++)
    {
        cin>>AlreadyBooked>>Capacity;
        freeSpace = Capacity - AlreadyBooked;
         //cout<<freeSpace<<endl;
        if(freeSpace>=2)
        {
            count +=1;
        }
    }
    cout<<count<<endl;

    return 0;
}
