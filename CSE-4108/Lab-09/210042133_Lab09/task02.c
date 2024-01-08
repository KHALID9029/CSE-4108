#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int digits[10] = {0};

    while(n!=0)
    {
        digits[n%10]++;
        n/=10;
    }
    printf("digits:\t\t");

    for(int i = 0; i <10; i++) printf("%d\t", i);
    printf("\nOccurances:\t");
    for(int i = 0; i <10; i++) printf("%d\t", digits[i]);

    return 0;
}
