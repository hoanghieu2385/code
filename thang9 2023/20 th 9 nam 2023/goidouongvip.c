#include <stdio.h>

void displayMenu();
void placeOrder(char option);
float calculateTotalCost(char option, int quantity);

int main()
{
    char option;
    int quantity;

    do { 
        displayMenu();
        printf("Enter your option: ");
        scanf("%c", &option);
        if ( option != 'd') {
            printf("Enter the quantity: ");
            scanf("%d", &quantity);
            placeOrder(option);
            float totalCost = calculateTotalCost( option, quantity);
            printf("Total cost: $%.2f\n\n", totalCost);
        }
    } while (option != 'd');
    return 0;
}

void displayMenu()
{
    printf("********** Coffee Shop Menu **********\n");
    printf("a. Espesso - $2.50\n");
    printf("b. Cappuccino - $3.00\n");
    printf("a. Latte - $3.50\n");
    printf("d. Quit\n");
}

void placeOrder(char option)
{
    switch ( option ) {
        case 'a':
            printf("Placing order: Espresso\n");
            break;
        case 'b':
            printf("Placing oder: Cappuccino\n");
            break;
        case 'c':
            printf("Placeing oder: Latte\n");
            break;
        default:
            printf("Invalid option. Please try again.\n");
    }
}

float calculateTotalCost(char option, int quatity)
{
    float price;

    switch (option)
    {
    case 'a':
        price = 2.50;
        break;
    case 'b':
        price = 3.00;
        break;
    case 'c':
        price = 3.50;
        break;
    default:
        price == 0.00;
    }
    return price * quatity;
}