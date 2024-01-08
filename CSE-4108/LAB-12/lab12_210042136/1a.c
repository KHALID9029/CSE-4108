#include<stdio.h>

int main()
{
    char s[1001], rev[1001];
    int j = 0, i;

    while(1){
        char c = getchar();
        if(c == '\n') break;
        s[j] = c;
        j++;
    }
    s[j] = '\0';

    for(i = 0; i < j; i++){
        rev[i] = s[j-i-1];
    }

    rev[i] = '\0';
    printf("%s\n", rev);

    return 0;
}
