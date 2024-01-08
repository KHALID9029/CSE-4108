#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    printf("Enter a message: ");
    gets(s);
    int l=strlen(s);
    char *i;
    i=&s[l];
    printf("Reversal is: ");
    for(;i>=&s[0];i--)
    {
        printf("%c",*i);
    }


    return 0;
}
