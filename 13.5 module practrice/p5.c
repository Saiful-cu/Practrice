#include<stdio.h>

int main()
{
    int mat[100][100]={0};
    int number,index1,index2;

    scanf("%d",&number);

    for(int i=0;i<number;i++)
    {
        scanf("%d %d",&index1,&index2);
        mat[index1][index2] = 1;
    }
    printf("Total empty cells - %d\n",9-number);
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            if(mat[i][j] == 0)
            {
                printf("%d %d\n",i,j);
            }
        }
    }

    return 0;
}
