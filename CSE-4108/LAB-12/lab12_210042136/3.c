#include <stdio.h>
#include <string.h>

int main()
{
    char s[80];
    printf("Enter a sentence: ");
    scanf("%[^\n]", s);

    int len = strlen(s), cnt = 1;
    char word[80][80];
    int x = 0, y = 0;

    for(char *p = s; *p != '\0'; p++){
        if(*p == ' '){
            word[x][y] = '\0';
            cnt++;
            y = 0, x++;
        }
        else word[x][y++] = *p;
    }


    int last = s[len-1], fullstop = 0;

    if((last>='A' && last<='Z') || (last>='a' && last<='z')) fullstop = 1;

    else word[x][y-1] = '\0';

    printf("Reversal of sentence: ");
    for(int i = cnt-1; i>= 0; i--){
        if(!i && fullstop) printf("%s.", word[i]);
        else if(!i) printf("%s%c", word[i], last);
        else printf("%s ", word[i]);
    }

    return 0;
}

