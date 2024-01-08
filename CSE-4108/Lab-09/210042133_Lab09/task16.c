#include <stdio.h>
#include <string.h>

int main()
{
    char word1[50], word2[50];
    printf("Enter first word: ");
    scanf("%s", word1);
    printf("Enter second word: ");
    scanf("%s", word2);

    int w1char[26] = {0}, w2char[26] = {0};
    for(int i = 0; i < strlen(word1); i++) w1char[word1[i]-'a']++;
    for(int i = 0; i < strlen(word1); i++) w2char[word2[i]-'a']++;

    int flag = 1;
    for(int i = 0; i < 26; i++)
    {
        if(w1char[i] != w2char[i])
        {
            flag = 0;
            break;
        }
    }
    if(flag) printf("The words are anagrams.");
    else printf("The words are not anagrams.");

    return 0;
}
