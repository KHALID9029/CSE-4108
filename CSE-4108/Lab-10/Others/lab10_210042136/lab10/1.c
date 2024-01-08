#include <stdio.h>

void read_string(char ch[]){
    scanf(" %[^\n]", ch);
}

char to_lowercase(char ch){
    if(ch >= 'A' && ch <= 'Z') return ch + 32;
}

void print_string(char ch[]){
    printf("%s\n", ch);
}

int main()
{
    char ch[10000];
    printf("Input a string: ");
    read_string(ch);
    for(int i = 0; ch[i] != '\0'; i++) ch[i] = to_lowercase(ch[i]);
    print_string(ch);

    return 0;
}
