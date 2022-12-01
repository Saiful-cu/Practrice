#include<stdio.h>

int main()
{
    int mat[100][100],transform[100][100],test =0;
    int row,column;

    scanf("%d %d",&row,&column);


        for(int i=0; i<row; i++)
        {
            for(int j=0; j<column; j++)
            {
                scanf("%d",&mat[i][j]);

            }

        }

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<column; j++)
            {
                printf("%d ",mat[j][i]);
            }
            printf("\n");
        }

    return 0;
}

