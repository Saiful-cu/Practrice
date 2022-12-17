#include<stdio.h>

int main()
{
   FILE *inputFile;
   FILE *outputFile;

   inputFile = fopen("4thInput.txt","r");
   outputFile = fopen("4thOutput.txt","w");

   int n,value,sum=0;
   fscanf(inputFile,"%d",&n);
   for(int i=0;i<n;i++)
   {
       fscanf(inputFile,"%d",&value);
       sum += (value%10);
   }
   fprintf(outputFile, "%d",sum);

    return 0;
}
