#include <stdio.h>

void pay_amount(int dollars , int *twenties , int *tens ,int *fives , int *ones){
    if(dollars / 20){
        *twenties = dollars / 20;
        dollars = dollars % 20;
    }
    if(dollars / 10){
        *tens = dollars / 10;
        dollars = dollars % 10;
    }
    if(dollars / 5){
        *fives = dollars / 5;
        dollars = dollars % 5;
    }
    *ones = dollars;
}

int main()
{
    int dollars , twenties = 0, tens = 0, fives = 0, ones = 0;
    printf("Enter dollars: ");
    scanf("%d", &dollars);
    pay_amount(dollars, &twenties , &tens , &fives , &ones);
    printf("Twenties = %d\nTens = %d\nFives = %d\nOnes = %d\n", twenties , tens , fives , ones);

    return 0;
}
