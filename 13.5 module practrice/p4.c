#include<stdio.h>

int main()
{
    int mat[100][100],mat2[100][100],addition[100][100],test =0;
    int row,column;

    scanf("%d %d",&row,&column);


        for(int i=0; i<row; i++)
        {
            for(int j=0; j<column; j++)
            {
                scanf("%d",&mat[i][j]);

            }
            printf("\n");
        }
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<column; j++)
            {
                scanf("%d",&mat2[i][j]);
            }
        }
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<column; j++)
            {
                addition[i][j] = mat[i][j]+ mat2[i][j];
            }
        }
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<column; j++)
            {
                printf("%d ",addition[i][j]);
            }
            printf("\n");
        }

    return 0;
}
