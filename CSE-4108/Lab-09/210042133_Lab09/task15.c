#include <stdio.h>
#include <string.h>

int main()
{

    char s[80];
    printf("Enter a message to be encrypted: ");
    scanf("%[^\n]", s);
    printf("Enter shift amount (1-25): ");
    int n, len = strlen(s);
    scanf("%d", &n);

    for(int i = 0; i < len; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            int asc = s[i] - 'A';
            s[i] = (asc+n)%26+'A';
        }
        else if(s[i] >= 'a' && s[i] <= 'z')
        {
            int asc = s[i] - 'a';
            s[i] = (asc+n)%26+'a';
        }
    }
    printf("Encrypted message: %s", s);

    return 0;
}
