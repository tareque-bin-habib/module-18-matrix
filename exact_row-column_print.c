#include <stdio.h>
int main()
{
    int row, clm;
    scanf("%d %d", &row, &clm);
    int a[row][clm];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < clm; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // exact row
    // int e;
    // scanf("%d", &e);
    // for (int i = 0; i < clm; i++)
    // {
    //     printf("%d ", a[e][i]);
    // }

    // exact row
    int e;
    scanf("%d", &e);
    for (int i = 0; i < row; i++)
    {
        printf("%d ", a[i][e]);
    }
    printf("\n");

    return 0;
}