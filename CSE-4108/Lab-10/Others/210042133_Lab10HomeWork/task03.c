#include <stdio.h>
#include <string.h>
#include <stdbool.h>


void read_word (int word[26])
{
    char s[100];
    scanf("%s", s);
    for(int i = 0; i < strlen(s); i++) word[s[i]-'a']++;
}

bool equal_array (int word_1 [26] , int word_2 [26])
{
    bool flag = true;
    for(int i = 0; i < 26; i++)
    {
        if(word_1[i] != word_2[i])
        {
            flag = false;
            break;
        }
    }

    return flag;
}

int main()
{
    int w1char[26] = {0}, w2char[26] = {0};

    printf("Enter first word: ");
    read_word(w1char);

    printf("Enter second word: ");
    read_word(w2char);



    if(equal_array(w1char, w2char)) printf("The words are anagrams.");
    else printf("The words are not anagrams.");

    return 0;
}
