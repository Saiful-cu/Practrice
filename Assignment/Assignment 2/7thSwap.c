#include <stdio.h>    // Include the standard input and output library.

void swap(int *s, int *t);    // Declare swap function

int main()
{
    int n, arr[1000];    // Declare variables n and arr with size of 1000
    scanf("%d", &n);    // Take input for n
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);    // Take input for arr
    }
    int numberOfTest, index1, index2;    // Declare variable numberOfTest, index1 and index2
    scanf("%d", &numberOfTest);    // Take input for numberOfTest

    for (int i = 0; i < numberOfTest; i++)
    {
        scanf("%d %d", &index1, &index2);    // Take input for index1 and index2
        swap(&arr[index1], &arr[index2]);    // Call swap function
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);    // Print the value of arr
    }
    return 0;
}

void swap(int *s, int *t)
{
    int temp;    // Declare int variable temp
    temp = *s;    // Assign value of s to temp
    *s = *t;    // Assign value of t to s
    *t = temp;    // Assign value of temp to t
}
