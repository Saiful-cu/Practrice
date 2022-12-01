#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int arr1[100],numberOfStudent,indexNumber,temp=0;

    scanf("%d",&numberOfStudent);
    for(int i=1;i<=numberOfStudent;i++)

    {
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&indexNumber);


    for(int i=indexNumber+1;i<=numberOfStudent;i++)
    {
         printf("%d ",arr1[i]);
    }

    return 0;
}
