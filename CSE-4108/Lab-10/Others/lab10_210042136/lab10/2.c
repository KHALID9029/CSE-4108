#include <stdio.h>
#include <math.h>

long long poly(int x){
    return 2 * pow(x, 7) + pow(x, 6) - 4 * pow(x, 5) - 2 * pow(x, 4) + pow(x, 3) - 3 * x * x + 6 * x + 10;
}

int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Value of the polynomial is: %lld\n");

    return 0;
}
