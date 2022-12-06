#include<stdio.h>
#include<math.h>

struct point{
  int x;
  int y;

};

int manhatten(struct point p,struct point q)
{
    int ans = abs(p.x-q.x)+abs(p.y-q.y);
    return ans;
}

int main()
{
    struct point p1;
    struct point p2;

    scanf("%d %d",&p1.x,&p1.y);
    scanf("%d %d",&p2.x,&p2.y);
    printf("Manhatten value is %d\n",manhatten(p1,p2));

    return 0;
}
