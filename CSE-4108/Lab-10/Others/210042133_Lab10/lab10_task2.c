#include <stdio.h>
#include <string.h>

void get_freq(char s[], int len)
{
    int freq[26] = {0};
    for(int i = 0; i <len; i++)
    {
        freq[s[i]-'a']++;
    }

    for(int i = 0; i< 26; i++)
    {
        if(freq[i] > 0) printf("%c=%d\n",i+'a',freq[i]);
    }
}

int main()
{
    char s[100];
    scanf("%s", s);
    int len = strlen(s);
    get_freq(s, len);

    return 0;
}
