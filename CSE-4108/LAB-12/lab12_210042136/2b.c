#include <stdio.h>
#include <ctype.h>
int main()
{
    char s[1001];
    int i, j = 0;
    while(1){
        char c = getchar();
        c = tolower(c);
        if(c == '\n') break;
        else if(c >= 'a' && c <= 'z'){
            s[j] = c;
            j++;
        }
    }
    j--;
    int k = j;
    char *p;
    for(p = s; p != s + j/2; p++){
        if(*p != *(s+k)) break;
        k--;
    }

    if(p == s + j / 2) printf("Palindrome\n");
    else printf("Not a palindrome\n");

    return 0;
}

