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

    for(i = 0; i < j/2; i++){
        if(s[i] != s[j-i-1]) break;
    }
    if(i == j / 2) printf("Palindrome\n");
    else printf("Not a palindrome\n");

    return 0;
}
