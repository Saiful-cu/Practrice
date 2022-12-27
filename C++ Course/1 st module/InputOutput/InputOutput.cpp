#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //freopen("input.txt","r", stdin);
    //freopen("Output.txt" , "w",stdout);
   // string s;

    //getline(cin,s);
     //cout<<s;

   // ofstream of ;
    //of.open("Test.txt");

    //of<<"Hello World";

   ifstream ifs;
   ifs.open("new.txt");
   int a,b;
   double c;
   ifs>>a>>c>>b;

   cout<<a<<endl;

    return 0;
}
