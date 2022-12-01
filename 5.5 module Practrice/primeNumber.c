#include<stdio.h>
int main()
{

    int num,result=0;
    scanf("%d",&num);

    for(int i=2;i<num;i++)
    {
        if(num%i ==0)
        {
            result = 1;
            printf("Composite");
            break;
        }
    }
    if(result == 0)
    {
        printf("Prime");
    }
}
