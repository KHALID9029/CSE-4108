#include <stdio.h>
int main()
{
    char c,x,y;
    int sum;
    int ara[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    printf("Enter a word: ");

    while (1)
        {
          c=getchar();
          if (c=='\n') {break;}
          x=c-'a';
          sum += ara[x];
        }
    printf("Scrabble value: %d\n", sum);
    return 0;
}
