#include<stdio.h>
#include<string.h>


char caseChange(char s);

int main()
{
    char str[100];

    scanf("%s",str);
    int len = strlen(str);
   for(int i=0;i<len;i++)
   {
       str[i] = caseChange(str[i]);
   }

    printf("%s",str);


    return 0;
}

char caseChange(char s)
{

    if( s%2 == 0)
        s -=32;
return s;
}
