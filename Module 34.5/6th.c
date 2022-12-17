#include<stdio.h>

int main()
{
    FILE *inputFile;
    FILE *outputFile;

    inputFile = fopen("6thInput.txt","r");
    outputFile = fopen("6thOutput.txt","a");

    int year;
    fscanf(inputFile,"%d",&year);
    if((year%4==0 )&&(( year%400 ==0)|| year%100!=0))
    {
        fprintf(outputFile,"%d-->Yes\n",year);
    }
    else
        fprintf(outputFile,"%d-->No\n",year);

    return 0;
}
