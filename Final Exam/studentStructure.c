#include<stdio.h>

struct student
{
    char str[100];
    int Roll;
    float marks;
};

int main()
{
    struct student s;
    printf("Enter information:");
    printf("\nEnter name:");
    scanf("%s",&s.str);
    printf("Enter roll number:");
    scanf("%d",&s.Roll);
    printf("Enter marks:");
    scanf("%f",&s.marks);


    printf("Display Information:\n");
    printf("Name:%s\n",s.str);
    printf("Roll:%d\n",s.Roll);
    printf("Marks:%.1f\n",s.marks);




    return 0;
}
