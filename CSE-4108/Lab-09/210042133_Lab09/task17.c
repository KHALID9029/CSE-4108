#include <stdio.h>

int grid[99][99];

int main ()
{
    int n;
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int i = 0, j = n/2, cur_num = 1;
    int repos = n;
    while(cur_num <= n*n)
    {
        grid[i--][j++] = cur_num++;
        repos--;
        if(!repos) repos = n, i+=2, j--;

        if(i<0) i = n-1;
        if(j>=n) j = 0;
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++) printf("%d\t", grid[i][j]);
        printf("\n");
    }

    return 0;
}
