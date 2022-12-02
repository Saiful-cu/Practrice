#include<stdio.h>

int beautiful(int *arr,int n);    // Declare function beautiful
int is_available(int *n);    // Declare function is_available

int main()    // main function
{
    int n,arr[1000];    // Initialize integer n, array arr with 1000 size
    scanf("%d",&n);    // Take input n from user
    for(int i=0;i<n;i++)    // repeat loop n times
    {
        scanf("%d",&arr[i]);    // Take input from user
    }
    beautiful(arr,n);    // Call function beautiful with argument arr and n
    return 0;
}

int beautiful(int *arr,int  n)    // Defining function beautiful
{
    int numberOf_7 =0;    // Initializing variable numberOf_7=0
    for(int i=0;i<n;i++)    // Repeat loop n times
    {
        numberOf_7 += is_available((arr+i));    // Update the value of numberOf_7
    }
    if(numberOf_7 >= n/2)    // Check if numberOf_7 is greater then or equal to n/2
        printf("Beautiful\n");    // Print "Beautiful" on console
    else
        printf("Ugly\n");    // Print "Ugly" on console
    return 0;
}

int is_available(int *n)    // Defining function is_available
{
    int mod =0;    // Initializing variable mod=0
    int divide =*n;    // Initializing variable divide
    while(divide%10 >0)    // Repeat loop until divide mod 10 is greater then 0
    {
      mod = divide%10;    // Update the value of mod
      if(mod == 7)    // Check if mod is 7 or not
        return 1;    // Return 1
       divide /= 10;
    }
    return 0;
}
