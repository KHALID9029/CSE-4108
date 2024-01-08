#include <stdio.h>
long long power(long long x, long long n){
    if(n == 0) return 1;
    if(n == 2) return x * x;
    if(n % 2 == 0) return power(x, n/2) * power(x, n/2);
    return x * power(x, n-1);
}

int main(){
    long long x, n;
    printf("Enter x and n: ");
    scanf("%lld %lld", &x, &n);
    printf("x^n = %lld\n", power(x, n));
    return 0;
}
