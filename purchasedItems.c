#include <stdio.h>

struct Item
{
    char itemName[30];
    int quantity;
    float price, totalAmount;
};

float getTotalAmount(struct Item);

int main()
{
    struct Item IT;
    float tAmount;

    printf("Enter Item Name (max 30 characters): ");
    scanf("%[^\n]s", IT.itemName);
    /*we can also use gets(IT.itemName) - To read complete text untill '\n'*/

    printf("Enter price: ");
    scanf("%f", &IT.price);

    printf("Enter quantity: ");
    scanf("%d", &IT.quantity);

    tAmount = getTotalAmount(IT);

    printf("Item Name: %s\nPrice: %f\nQuantity: %d\n", IT.itemName, IT.price, IT.quantity);
    printf("\nTotal Price of all quanities: %f\n", tAmount);
    return 0;
}

float getTotalAmount(struct Item item)
{
    item.totalAmount = item.price * (float)item.quantity;

    return (item.totalAmount);
}
