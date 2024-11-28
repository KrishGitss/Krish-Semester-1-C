#include <stdio.h>
#include <string.h>

struct Item {
    char item_name[50];
    int quantity;
    float price;
    float amount;
};

void calculate_amount(struct Item *item) {
    item->amount = item->quantity * item->price;
    printf("Item Name: %s\n", item->item_name);
    printf("Quantity: %d\n", item->quantity);
    printf("Price: %.2f\n", item->price);
    printf("Amount: %.2f\n", item->amount);
}

int main() {
    struct Item item;

    printf("Enter item name: ");
    fgets(item.item_name, sizeof(item.item_name), stdin);
    item.item_name[strcspn(item.item_name, "\n")] = '\0';

    printf("Enter quantity: ");
    scanf("%d", &item.quantity);

    printf("Enter price: ");
    scanf("%f", &item.price);

    calculate_amount(&item);

    return 0;
}
