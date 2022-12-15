#include<stdio.h>

void input(int arr[4][4], int n);
void output(int arr[4][4]);
int  play(int arr[4][4], int count);
int  is_win(int arr[4][4],int a);

int main()
{
    int arr[4][4],n=4;

    input(arr,n);
    output(arr);

    int count=0;

    printf("\nLets Play\n");

    while(count!=4)
    {
        count++;
        if(play(arr,count) == 0)
        {
            break;
        }

    }

    return 0;
}


void input(int arr[4][4], int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            arr[i][j] = -1;
        }
    }
}

void output(int arr[4][4])
{
    printf("\n");

    for(int i=1; i<4; i++)
    {
        for(int j=1; j<4; j++)
        {
            if(arr[i][j] == -1)
                printf(" ");
            else if(arr[i][j] == 1)
            {
                printf("X");
            }
            else
            {
                printf("O");
            }
            if(j<3)
                printf("\t|\t");
        }
        printf("\n");
        if(i<3)
            printf("___________________________________");
        printf("\n\n");
    }
}

int  play(int arr[4][4], int count)
{
    int i,j;

    printf("First player turn(X) row and col: ");
    scanf("%d %d",&i,&j);
    arr[i][j] = 1;

    output(arr);
    if(count>2)
    {
        if(is_win(arr,1))
        {
            printf("First player is win");
            return 0;
        }

    }


    printf("Second player turn(O): ");
    scanf("%d %d",&i,&j);
    arr[i][j] = 2;
    output(arr);
    if(count>2)
    {
        if(is_win(arr,2))
        {
            printf("Second player is win");
            return 0;
        }

    }
    if(count == 4)
    {
        printf("This game Destroy !! Please Try again");
    }

    return 1;
}

int  is_win(int arr[4][4],int a)
{
    int b=0;
    for(int i=1; i<4; i++)
    {
        if(arr[i][1] == arr[i][2] && arr[i][2] == arr[i][3] && arr[i][1] == a)
        {
            return 1;
        }
        else if(arr[1][i] == arr[2][i] && arr[2][i] == arr[3][i] && arr[1][i] == a)
            return 1;

        else if(arr[1][1] == arr[2][2] && arr[2][2] == arr[3][3] && arr[1][1] == a)
            return 1;
        else if(arr[1][3] == arr[2][2] && arr[2][2] == arr[3][1] && arr[1][3] == a)
            return 1;
        else
            return 0;
    }
    return 0;
}
