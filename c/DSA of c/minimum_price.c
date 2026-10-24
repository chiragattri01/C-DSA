#include <stdio.h>

int main() {
    int price1, price2, price3;

    // User inputs for the three smartphone prices
    printf("Enter the price of Smartphone 1: $");
    scanf("%d", &price1);

    printf("Enter the price of Smartphone 2: $");
    scanf("%d", &price2);

    printf("Enter the price of Smartphone 3: $");
    scanf("%d", &price3);

    
    if (price1 <= price2 && price1 <= price3) {
        printf("The best deal is Smartphone 1 at $%d\n", price1);
    } 
    else if (price2 <= price1 && price2 <= price3) {
        printf("The best deal is Smartphone 2 at $%d\n", price2);
    } 
    else {
        printf("The best deal is Smartphone 3 at $%d\n", price3);
    }

    return 0;
}