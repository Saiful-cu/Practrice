#include<stdio.h>

float find_Area_of_circle(int r);

int main()
{
    int r;
    scanf("%d",&r);


    float AreaOfCircle = find_Area_of_circle(r);

    printf("%f",AreaOfCircle);

    return 0;
}

float find_Area_of_circle(int r)
{
    int pi = 3.1416;

    return pi*(r*r);
}
