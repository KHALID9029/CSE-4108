#include <stdio.h>

void find_one(int mat[][5])
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(mat[i][j] == 1)
            {
                printf("1 at row: %d, column: %d\n", i+1, j+1);
                return;
            }
        }
    }
}

int main()
{
    int mat[5][5];
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    find_one(mat);

    return 0;
}
