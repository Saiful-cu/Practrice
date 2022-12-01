#include<stdio.h>
#include<string.h>

int main()
{
    int length,count=0 ;
    char string[1000];

    scanf("%s",string);
    length = strlen(string);

    for(int i=0,j=length-1;i<(length/2)+1,j>=i;i++,j--)
    {

            if(string[i] == string[j])
            {
                count +=1;
            }
            else
            {
                count =0;
                break;
            }


    }
    if(count == 0)
    {
        printf("No");
    }
    else{
        printf("Yes");
    }

    return 0;
}
