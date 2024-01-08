#include <stdio.h>
#include <string.h>
int main()
{
    char s[105];
    printf("Enter message: ");
    scanf("%[^\n]", s);

    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 'a' + 'A';
    }

    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == 'A') s[i] = '4';
        else if(s[i] == 'B') s[i] = '8';
        else if(s[i] == 'E') s[i] = '3';
        else if(s[i] == 'O') s[i] = '0';
        else if(s[i] == 'S') s[i] = '5';
    }

    printf("In B1FF-speak: %s", s);
    for(int i = 0; i < 10; i++) printf("!");

    return 0;
}
