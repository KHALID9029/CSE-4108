#include<stdio.h>
int main()
{
    struct
    {
      int number;
      char name[25];
      int on_hand;
    }part1={328,"North Hall",2},
     part2={329,"North Hall",1};

     printf("%d\n",part1.number);
     printf("%s\n",part1.name);
     printf("%d\n",part1.on_hand);


    return 0;
}
