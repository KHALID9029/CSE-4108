#include <stdio.h>

void selection_sort(int ara[], int n){
    if(n == 0) return;
    int large = 0, j;
    for(int i = 0; i < n; i++){
        if(ara[i] > large){
            large = ara[i];
            j = i;
        }
    }
    ara[j] = ara[n-1];
    ara[n-1] = large;
    selection_sort(ara, n-1);
}
int main()
{
    int ara[] = {1, 5, 3, 4, 2, 6, 7};
    selection_sort(ara, sizeof(ara) / sizeof(int));

    for(int i = 0; i < sizeof(ara) / sizeof(int); i++){
        printf("%d ", ara[i]);
    }
    printf("\n");

    return 0;
}
