#include<stdio.h>

int main()
{
    FILE *inputFile;
    FILE *outputFile;

    inputFile= fopen("5thInput.txt","r");
    outputFile = fopen("5thOutput.txt","w");

    int n;

    fscanf(inputFile,"%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
            fprintf(outputFile, " ");
        for(int j=0;j<5;j++)
            fprintf(outputFile,"#");
        fprintf(outputFile,"\n");
    }

    return 0;
}
