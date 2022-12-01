#include<iostream>
using namespace std;

int main()
{
    int Number_of_Chocklet,number_of_packet,Total_Chocklet;
    scanf("%d",&Number_of_Chocklet);

    Total_Chocklet= Number_of_Chocklet;

    number_of_packet = Number_of_Chocklet;

    while(number_of_packet>=4)
    {
        Number_of_Chocklet = number_of_packet / 4;

        Total_Chocklet += Number_of_Chocklet;

        number_of_packet = Number_of_Chocklet + (number_of_packet%4);


    }
    printf("Number of Chocklate is: %d",Total_Chocklet);
    return 0;
}
