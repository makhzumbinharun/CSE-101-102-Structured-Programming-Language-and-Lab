#include <stdio.h>

int main() {
    float balance, product_cost, money_received;
    printf("Enter your initial balance: ");
    scanf("%f", &balance);
    printf("Enter the product cost: ");
    scanf("%f", &product_cost);
    printf("Enter the amount you received from your brother: ");
    scanf("%f", &money_received);
    balance = (balance-product_cost+money_received);
    printf("Remaining Balance: %.2f Tk\n", balance);

    return 0;
}
