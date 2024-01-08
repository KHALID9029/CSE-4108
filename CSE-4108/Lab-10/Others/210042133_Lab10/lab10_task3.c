#include <stdio.h>
#include <string.h>

void print_pyramid(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j < n-i; j++) printf(" ");
        for(int j = 0; j < i; j++) printf("*");
        for(int j = 0; j <= i; j++) printf("*");
        if(i!=n-1) printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    print_pyramid(n);

    return 0;
}
