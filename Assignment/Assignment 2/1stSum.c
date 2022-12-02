#include<stdio.h>

int main()
{
    int n;

    scanf("%d",&n);
    int plus =1,minus =1,sum=0;

    for(int i=1;i<=n;i++)
    {
        if(plus<=3)
        {
            sum+=i;
            //printf("%d %d %d\n",sum,plus,minus);
            plus++;
            minus++;

        }
        else if(minus>=3)
        {
            sum -= i;
            //  printf("%d %d %d\n",sum,plus,minus);
            plus++;
            minus++;


        }
        if(plus==7 || minus ==7)
        {
            plus =1;
            minus=1;

        }
    }
      printf("%d\n",sum);

    return 0;
}
