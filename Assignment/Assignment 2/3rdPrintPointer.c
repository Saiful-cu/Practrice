#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    int* Px = &x;
    int* Py = &y;

    printf("%d %d",*Px,*Py);

    return 0;
}
