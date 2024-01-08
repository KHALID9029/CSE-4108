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
    printf("Repeated digit(s): ");
    for(int i = 0; i <10; i++) if(digits[i] > 1) printf("%d ", i);

    return 0;
}
