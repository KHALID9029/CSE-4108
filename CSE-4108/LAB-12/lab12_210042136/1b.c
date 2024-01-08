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
    for(char *p = &s[0]; *p != '\0'; p++){
        rev[j-1] = *p;
        j--;
    }


    printf("%s\n", rev);

    return 0;
}
