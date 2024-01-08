#include<stdio.h>
int main()
{
    char f[20],s[20];
    printf("Enter a first and last name:");
    scanf("%s%s",f,s);
    printf("%s,%c.",s,f[0]);

    return 0;
}
