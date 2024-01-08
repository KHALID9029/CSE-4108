#include <stdio.h>

void read_string(char ch[], int length)
{
    int i = 0;
    while(i < length)
    {
        char c = getchar();
        if(c == '\n') continue;
        ch[i++] = c;
    }
    ch[i] = '\0';
}

void print_string(char ch[], int length)
{
    int i = 0;
    while(ch[i] != '\0' && i < length)
    {
        printf("%c", ch[i++]);
    }
    printf("\n");
}

char to_uppercase(char ch)
{
    if(ch >= 'a' && ch <= 'z') return ch - 'a' + 'A';
    return ch;
}

int main()
{
    char s[100];
    printf("Enter string length: ");
    int len;
    scanf("%d", &len);
    printf("Enter the string: ");
    read_string(s, len);

    printf("You entered: ");
    print_string(s, len);

    printf("In uppercase:\n");
    for(int i = 0; i < len; i++)
    {
        printf("%c\n", to_uppercase(s[i]));
    }

    return 0;
}
