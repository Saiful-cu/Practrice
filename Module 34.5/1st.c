#include<stdio.h>

int main()
{
    FILE *inputFile;
    FILE *outputFile;

    inputFile = fopen("1stInput.txt", "r");
    outputFile = fopen("1stOutput.txt", "w");
    int n,arr[100];
    fscanf(inputFile,"%d",&n);
    for(int i=0;i<n;i++)
    {
        fscanf(inputFile,"%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
        fprintf(outputFile,"%d ",arr[i]);

    return 0;
}
