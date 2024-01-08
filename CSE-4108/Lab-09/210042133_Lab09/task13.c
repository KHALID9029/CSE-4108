#include <stdio.h>

int main()
{

    char first[20], last[20];
    printf("Enter a first and last name: ");
    scanf("%s %s", first, last);
    printf("%s, %s.", last, first);

    return 0;
}
