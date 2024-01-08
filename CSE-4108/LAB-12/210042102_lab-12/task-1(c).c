#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    printf("Enter a message: ");
    gets(s);
    int l=strlen(s);

    int i;
    printf("Reversal is: ");
    for(i=l-1;i>=0;i--)
    {
        printf("%c",*(s+i));
    }


    return 0;
}

