#include<stdio.h>

int main()
{
    int NumTest ,sum,num1,num2,num3,num4 ;

    scanf("%d",&NumTest);

    for(int i=0;i<NumTest;i++)
    {
        scanf("%d %d %d %d",&sum,&num1,&num2,&num3);
        num4 = (sum)-(num1+num2+num3);

        printf("%d",num4);
    }







    return 0;
}
