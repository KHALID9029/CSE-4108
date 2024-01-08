#include <stdio.h>
#define n 10

void max_min(int *ara, int l, int *max_indx, int *min_indx){
    int max, min;
    max = min = ara[0];
    int *x, *y;
    for(int *i = ara; i < ara + l; i++){
        if(max <= *i){
            max = *i;
            x = i;
        }
        if(min >= *i){
            min = *i;
            y = i;
        }
    }

    *max_indx = x - ara + 1;
    *min_indx = y - ara + 1;
}
int main()
{
    int ara[n], *i, big, little;
    for(i = ara; i < ara + n; i++){
        scanf("%d", i);
    }

    max_min(ara, n, &big, &little);
    printf("%d %d\n", big, little);
}
