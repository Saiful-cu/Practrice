#include<stdio.h>

struct point
{
   float x;
   float y;

};

struct point middle(struct point p1, struct point p2)
{
    struct point p3;
     p3.x = (p1.x+p2.x)/2;
     p3.y =(p1.y + p2.y)/2;
    return p3;
}

int main()
{
    struct point p1;
    struct point p2;

    scanf("(%f ,%f)\n",&p1.x,&p1.y);

    scanf("(%f ,%f)",&p2.x,&p2.y);

    struct point p3;

    p3 = middle(p1,p2);
    printf("%.2f , %.2f",p3.x,p3.y);


    return 0;
}
