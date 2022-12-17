#include<stdio.h>

int main()
{
    FILE *inputFile;
    FILE *outputFile;

    inputFile = fopen("3rdInput.txt", "r");
    outputFile = fopen("3rdOutput.txt", "w");

    int testCase,n;
    fscanf(inputFile,"%d",&testCase);
    for(int i=0; i<testCase; i++)
    {
        fscanf(inputFile,"%d",&n);
        int t = n;

        if(n>0)
        {
            for(int j=0; j<(2*n)+1; j++)
            {

                fprintf(outputFile,"%d ",t);
                t -=1;
            }
        }
        else
        {

            for(int j=0; j<(2*n)+1; j++)
            {
                fprintf(outputFile,"%d ",t);
                t +=1;
            }
        }
        fprintf(outputFile,"\n");
    }

    return 0;
}
