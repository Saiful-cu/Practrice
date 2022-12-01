#include<iostream>
using namespace std;

#include<string.h>

int main()
{
    char st[1000005];
    long long int arr[1000005] ={0};
    cin>>st;

   long long  int length , cont=1;
      length = strlen(st);
      for(int i =1;i<length;i++)
      {
          if(st[i]== st[i-1])
          {
              cont += 1;
          }
          else{
                arr[i] = cont;
            cont = 1;
          }
      }
      for(int i=0;i<length;i++)
      {
          if(cont < arr[i])
          {
              cont = arr[i];
          }
      }

      cout<<cont;

    return 0;
}
