#include<stdio.h>

int main()
{
    int mat[100][100],mat1[100][100],mulMat[100][100];
    int row ,column,value;

    scanf("%d %d",&row,&column);

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
for(int k=0;k<row;k++)
{
     for(int i=0;i<row;i++)
    {
        value =0;
        for(int j=0;j<column;j++)
        {
            value = value + (mat[k][j] * mat1[j][i]);
            //printf("%d%d  ",i,j);
        }

        mulMat[k][i] = value;
    }
    printf("\n");

}
for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ",mulMat[i][j]);
        }
        printf("\n");
    }


    return 0;
}
