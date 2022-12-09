#include<stdio.h>

int main()
{
    int mat[100][100],mat2[100][100];
    int n,m;

    scanf("%d %d",&n,&m);

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
           scanf("%d",&mat[i][j]);

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
           scanf("%d",&mat2[i][j]);

        for(int i=0;i<n;i++)
        {

            for(int j=0;j<m;j++)
        {
            mat[i][j] =mat[i][j]+mat2[i][j];
            printf("%d ",mat[i][j]);
        }
        printf("\n");
        }


    return 0;
}
