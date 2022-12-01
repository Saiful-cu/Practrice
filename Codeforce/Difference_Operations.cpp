#include<stdio.h>

int main()
{
    int mat[5][5],magicNumber=0,sum1[5]= {0},sum2[5]= {0};

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            sum1[i] += mat[i][j];
            sum2[i] += mat[j][i];
        }
        if(i>0)
        {
            if(sum1[i] != sum1[i-1] || sum1[i] != sum2[i] || sum2[i] != sum2[i-1] || sum1[i-1] != sum2[i-1])
            {
                magicNumber = 1;
                printf("NO");
                break;
            }

        }
    }
    if(magicNumber == 0)
    {
        printf("Yes");
    }

    return 0;
}
