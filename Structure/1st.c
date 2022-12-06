#include<stdio.h>
#include<string.h>

struct student{
  int roll;
  char name[50];
  int age;
  float weigth;

};

int main()
{
    struct student  s;
    s.age =20;
    s.name = strcpy("Saiful Islam");
    s.roll = 01;
    s.weigth = 65.23;

    printf("age=%d , name =%s , roll=%d , weight = %f",s.age,s.name,s.roll,s.weigth);

    return 0;
}
