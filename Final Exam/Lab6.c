#include<stdio.h>
#include<math.h>

int main()
{
    int testCase,start,end;

    scanf("%d",&testCase);
    int squire =0,s =0;

    for(int i=0;i<testCase;i++)
    {
        scanf("%d %d",&start,&end);
        for(int j=start;j<=end;j++)
        {
            squire = sqrt(j);
            s =0;
            for(int k=2;k<=squire;k++)
            {
                if(j%k ==0)
                {
                    s=1;
                    break;
                }
            }
            if(s==0)
                printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}
