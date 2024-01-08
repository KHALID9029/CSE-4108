#include <stdio.h>

int dub_filter(char s[], int len, char org[]){
    int i, j;
    for(i = 0, j = 0; i < len; i++){
        if(s[i] == 'd' && s[i+1] == 'u' && s[i+2] == 'b'){
            i+=2;
            if(i == 2) continue;
            org[j] = ' ';
            j++;
        }
        else{
            org[j] = s[i];
            j++;
        }
    }
    return j;
}

int main()
{
    int len, len2;
    scanf("%d", &len);
    char s[len], org[len];
    getchar();
    for(int i = 0; i < len; i++) s[i] = getchar();
    len2 = dub_filter(s, len, org);
    for(int i = 0; i < len2; i++) putchar(org[i]);

}
