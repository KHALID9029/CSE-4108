#include <stdio.h>

int main()
{

    char num[20];
    printf("Enter phone number: ");
    scanf("%s", num);
    for(int i = 0; i < strlen(num); i++)
    {
        if(num[i] >= 'A' && num[i] <= 'Z')
        {
            int asc = num[i] - 'A';
            if(asc < 15) num[i] = 2+ (asc/3) + '0';
            else if(asc < 19) num[i] = '7';
            else if(asc < 22) num[i] = '8';
            else num[i] = '9';
        }
    }
    printf("%s", num);
    return 0;
}
