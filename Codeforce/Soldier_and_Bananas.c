#include<stdio.h>

int main()
{
    int banannaPrice,Dollor,NumberofBananna,borrowDollor=0;

    scanf("%d %d %d",&banannaPrice,&Dollor,&NumberofBananna);

    for(int i=1;i<=NumberofBananna;i++)
    {

            Dollor = Dollor - i*banannaPrice;

    }
    if(Dollor <0)
    borrowDollor = -(Dollor);
    else
        borrowDollor = 0;
    printf("%d",borrowDollor);
}
