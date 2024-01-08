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
    rev[j] = '\0';

    for(i = 0; *(s+i) != '\0'; i++){
        rev[j-1] = *(s+i);
        j--;
    }

    printf("%s\n", rev);

    return 0;
}

