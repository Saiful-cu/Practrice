#include<stdio.h>
#include<string.h>

void Descending_Order_sort(char str[],int len);
void swap(char* s, char* t);

int main()
{
    int len;
    char str[100];

    scanf("%s",str);
    len = strlen(str);

    Descending_Order_sort(str,len);
    printf("%s",str);
    return 0;
}

void Descending_Order_sort(char str[],int len)
{
    for(int i=0;i<len;i++)
        for(int j=i+1;j<len;j++)
              if(str[i]<str[j])
                  swap(&str[i],&str[j]);
}
void swap(char* s, char* t)
{
    char temp;
    temp = *s;
    *s = *t;
    *t = temp;
}
