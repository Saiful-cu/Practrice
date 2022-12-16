#include<stdio.h>
#include<string.h>

int main()
{
    int n,arr[1000]={0},a;
    char str[200];

    scanf("%d",&n);
    scanf("%s",str);

    for(int i=0;i<n;i++)
    {
        a = str[i]-97;
       // printf("%d ",a);
        arr[a] +=1;

    }
    int c=0;
    for(int i=0;i<26;i++)
    {
        if(arr[i]==1)
          c++;
    }
    printf("%d",c);

    return 0;
}
