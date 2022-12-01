#include<stdio.h>
#include<string.h>

int main()
{
    int length,vowel=0,consonant=0;
    char string[1000];

    scanf("%s",string);
    length = strlen(string);

    for(int i=0;i<length;i++)
    {
        if(string[i] == 'a' || string[i] =='e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            vowel +=1;
        }
        else{
            consonant +=1;
        }

    }
    printf("vowel : %d\nconsonant :%d",vowel,consonant);


    return 0;
}
