#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    int upvote=0,downvote=0;
    int testCase,numberOfReviewer,review;

    cin>>testCase;

    for(int i=0;i<testCase;i++)
    {
        cin>>numberOfReviewer;
        upvote =0,downvote =0;
        for(int j=0;j<numberOfReviewer;j++)
        {
            cin>>review;
            if(review == 1)
            {
                upvote +=1;
            }
            else if(review == 2)
            {
                downvote +=1;
            }
            else{
                if(upvote>=downvote)
                {
                    upvote += 1;
                }
            }
        }
         cout<<upvote<<endl;
    }


    return 0;
}
