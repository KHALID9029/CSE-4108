#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define valid(i,j) i >=0 && i<10 && j>=0 && j < 10

int dir_i[] = { 0, 0,-1, 1};
int dir_j[] = {-1, 1, 0, 0};

int isblocked(char grid[10][10], int i, int j)
{
    int valid_move = 0, blocked_cell = 0;
    if(valid(i, j-1))
    {
        valid_move++;
        if(grid[i][j-1] != '.') blocked_cell++;
    }
    if(valid(i, j+1))
    {
        valid_move++;
        if(grid[i][j+1] != '.') blocked_cell++;
    }
    if(valid(i-1, j))
    {
        valid_move++;
        if(grid[i-1][j] != '.') blocked_cell++;
    }
    if(valid(i+1, j))
    {
        valid_move++;
        if(grid[i+1][j] != '.') blocked_cell++;
    }

    return valid_move > blocked_cell;
}

void generate_random_walk (char walk [10][10])
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++) walk[i][j] = '.';
    }

    walk[0][0] = 'A';
    int prevChr = 1;
    int cur_i = 0, cur_j = 0;

    while(prevChr < 26)
    {
        int nxtmove = rand()%4;
        int nxt_i = cur_i + dir_i[nxtmove];
        int nxt_j = cur_j + dir_j[nxtmove];
        if(valid(nxt_i, nxt_j))
        {
            if(walk[nxt_i][nxt_j] == '.')
            {
                cur_i = nxt_i, cur_j = nxt_j;
                walk[cur_i][cur_j] = 'A'+prevChr++;
            }
        }

        if(!isblocked(walk, cur_i, cur_j)) break;
    }
}

void print_array (char walk [10][10])
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++) printf("%c", walk[i][j]);
        printf("\n");
    }
}

int main()
{
    srand((unsigned)time(NULL));
    char grid[10][10];

    generate_random_walk(grid);
    print_array(grid);

    return 0;
}
