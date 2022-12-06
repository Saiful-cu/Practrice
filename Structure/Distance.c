#include<stdio.h>
#include<math.h>

struct point{

       int x;
       int y;
};

double distance(struct point p,struct point q)
{
    return sqrt(pow(p.x-q.x,2) + pow(p.y-q.y,2));
}

int main()
{
    struct point p1,p2;

    scanf("%d %d",&p1.x,&p2.x);
    scanf("%d %d",&p1.y,&p2.y);

    printf("distance is %lf",distance(p1,p2));
}
