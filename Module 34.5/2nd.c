#include<stdio.h>

int main()
{
    FILE *inputFile;
    FILE *outputFile;

    inputFile = fopen("2ndInput.txt","r");
    outputFile = fopen("2ndOutput.txt", "w");

    int n;
    fscanf(inputFile,"%d",&n);

    for(int i=1;i<=n;i++)
        fprintf(outputFile,"%d ",i);

    return 0;
}
