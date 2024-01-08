#include <stdio.h>
int f_index(int len, int ara[], int n){
    for(int i = 0; i < len; i++){
        if(ara[i] > n) return i + 1;
    }
}

int main()
{
    int len, n;
    scanf("%d", &len);
    int ara[len];
    for(int i = 0; i < len; i++) scanf("%d", &ara[i]);
    scanf("%d", &n);
    printf("%d\n", f_index(len, ara, n));

    return 0;
}
