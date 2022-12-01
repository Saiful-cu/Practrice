#include<stdio.h>
#include<string.h>

int main()
{
    int length , arr[1000],cont=0;
    char string[1000],temp;

    scanf("%s",string);
    length = strlen(string);

    for(int i=0;i<length-1;i++)
    {
        for(int j=i+1;j<length;j++)
        {
            if(string[i] > string[j])
            {
               temp = string[i];
               string[i] = string[j];
               string[j] = temp;
            }
        }
    }


    return 0;
}
