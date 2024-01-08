#include <stdio.h>

int main()
{
    int grid[5][5];
    for(int i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i+1);
        for(int j = 0; j < 5; j++)
        {
            scanf("%d", &grid[i][j]);
        }
    }

    int rowSum[5] = {0}, colSum[5] = {0};
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            rowSum[i]+= grid[i][j];
            colSum[i]+= grid[j][i];
        }
    }



    printf("Row totals: ");
    for(int i = 0; i < 5; i++) printf("%d ", rowSum[i]);
    printf("\nColumn totals: ");
    for(int i = 0; i < 5; i++) printf("%d ", colSum[i]);


    return 0;
}

/*
8 3 9 0 10
3 5 17 1 1
2 8 6 23 1
15 7 3 2 9
6 14 2 6 0
*/
