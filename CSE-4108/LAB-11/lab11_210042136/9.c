#include <stdio.h>

int gcd(int a, int b){
    if(b == 0)return a;
    return gcd(b, a%b);
}

void reduce (int numerator , int denominator , int *reduced_numerator , int * reduced_denominator){
    int g = gcd(numerator, denominator);
    *reduced_numerator = numerator / g;
    *reduced_denominator = denominator / g;
}

int main()
{
    int a, b, c, d;
    printf("Enter fraction: ");
    scanf("%d/%d", &a, &b);
    if(a == 0 && b != 0){
        printf("0\n");
        return 0;
    }
    reduce(a, b, &c, &d);
    printf("Reduced fraction: %d/%d\n", c, d);

    return 0;
}
