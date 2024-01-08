#include<stdio.h>
int main ()
{
    printf("Enter the number of shares:");
    int shares;
    scanf("%d",&shares);

    printf("Enter the price per share:");
    int price;
    scanf("%d",&price);

    //for the original broker//
    int trade=shares*price;
    float com;

    if (trade<2500)
    {
        com= (30+ (trade*(1.7/100)));
    }

    else if (trade>2500 && trade<6250)
    {
        com= (56+ (trade*(0.66/100)));
    }

    else if (trade>=6250 && trade<20000)
    {
        com= (76+ (trade*(0.34/100)));
    }

    else if (trade>=20000 && trade<50000)
    {
        com= (100+ (trade*(0.22/100)));
    }

    else if (trade>=50000 && trade<500000)
    {
        com= (155+ (trade*(0.11/100)));
    }

    else if (trade>=500000)
    {
        com= (255+ (trade*(0.09/100)));
    }

    printf("Commission:$%.2f\n",com);


    //for the rival's commission//

    float rcom;
    if (shares<2000)
    {
        rcom= (33 +(shares*(3.0f/100.0f)));
    }

    else if (shares>=2000)
    {
       rcom= (33 +(shares*(2.0f/100.0f)));
    }

    printf("Rival's Commission:$%.2f",rcom);



    return 0;
}
