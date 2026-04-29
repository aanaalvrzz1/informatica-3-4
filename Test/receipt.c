#include <stdio.h>
int main(void)
{
char item[50];
printf("type the name of the purshased product:\n");
scanf("%s", &item);
float price;
printf("type the price of the purshased product: $\n");
scanf("%f", &price);
int quantity;
printf("type the quntity bought:\n");
scanf("%d",&quantity);
printf("\n");
float total=price*quantity;
printf("********************************\n");
printf("Info´s Grocery Store \n");
printf("********************************\n");
printf("ITEM        QUANTITY        PRICE  \n");
printf("%s          %.2f           %d \n", item, price, quantity);
printf("--------------------------------\n");
printf("total                      $%.2f \n",total);
}
