#include<stdio.h>
int main()
{
    printf("Enter item number:");
    int item;
    scanf("%d",&item);

    printf("Enter unit price:");
    float price;
    scanf("%f",&price);

    printf("Enter purchase date (mm/dd/yyyy):");
    int mm,dd,yyyy;
    scanf("%d/%d/%d",&mm,&dd,&yyyy);

    printf("Item Price       Date       Unit Price\n");
    printf("$%.2f%12d/%d/%d%12d",price,mm,dd,yyyy,item);


return 0;
}
