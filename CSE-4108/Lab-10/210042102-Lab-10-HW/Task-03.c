#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
void read_word(int word[26])
{
    char c;
    printf("Enter word: ");
    while ((c = getchar()) != '\n')
        {
            word[toupper(c) - 'A']++;
        }
}

bool equal_array(int word1[26], int word2[26])
{
    int i;
    for (i = 0; i < 26; i++)
        {
            if (word1[i] != word2[i])
            return false;
        }
    return true;
}

int main()
{
    int i,
    word[26] = {0},
    word2[26] = {0};

    read_word(word);
    read_word(word2);

    if (equal_array(word, word2))
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    return 0;
}
