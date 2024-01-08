#include<stdio.h>
int main()
{
    char n;
    int vowels=0;
    while(1)
    {
        n=getchar();
        if(n=='\n') {break;}
        else if (n=='A'||n=='a'||n=='E'||n=='e'||n=='I'||n=='i'||n=='O'||n=='o'||n=='U'||n=='u')
        {
            vowels+=1;
        }
    }
    printf("Your sentence contains %d vowels",vowels);


    return 0;
}
