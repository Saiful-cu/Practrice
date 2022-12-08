#include<stdio.h>

struct point
{
    float x;
    float y;
};

struct Triangle
{
    struct point A;
    struct point B;
    struct point C;
};
struct point centraoid(struct Triangle t)
{
    struct point ans;
    ans = ((t.A))
};


int main()
{
    struct point p1;
    struct point p2;
    struct point p3;

    scanf("(%f,%f)\n",&p1.x,&p1.y);
    scanf("(%f,%f)\n",&p2.x,&p2.y);
    scanf("(%f,%f)",&p3.x,&p3.y);

    struct Triangle t= {p1,p2,p3};

    struct point ans = centraoid(t)
}
