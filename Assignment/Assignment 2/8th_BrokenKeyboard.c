#include<stdio.h>
#include<string.h>

void printC(char str[]);

int main()
{
    char str[1000];

    scanf("%s",str);
    printC(str);

    return 0;
}

void printC(char str[])
{
    int len = strlen(str);
    printf("%c",str[0]);
    for(int i=1;i<len;i++)
    {
        if(i%2 !=0)
            printf("%c%c",str[i],str[i]);
        else
            printf("%c",str[i]);

    }
}
