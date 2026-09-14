// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float cost, selling, profitLoss, percentage;

    printf("Enter the cost price: ");
    scanf("%f", &cost);

    printf("Enter the selling price: ");
    scanf("%f", &selling);

    if (cost <= 0 || selling < 0) {
    printf("Cost price and Selling price can not be negative.\n");
    } 
    else {
        profitLoss = selling - cost;

        if (profitLoss > 0) {
            percentage = (profitLoss / cost) * 100;
            printf("Profit percentage: %.2f%%\n", percentage);
        } else if (profitLoss < 0) {
            percentage = (-profitLoss / cost) * 100;
            printf("Loss percentage: %.2f%%\n", percentage);
        } else {
            printf("No profit, no loss.\n");
        }
    }

    return 0;
}
