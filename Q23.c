/* Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled. */

#include <stdio.h>

int main() {
    int late;
    int fine = 0;

    printf("Enter late days: ");
    scanf("%d", &late);

    if (late < 0) {
        printf("Invalid input\n");
    }
    else if (late == 0) {
        printf("Fine ₹0\n");
    }
    else if (late > 30) {
        printf("Membership Cancelled\n");
    }
    else {
        if (late <= 5) {
            fine = late * 2;
        } 
        else if (late <= 10) {
            fine = (5 * 2) + ((late - 5) * 4);
        } 
        else {
            fine = (5 * 2) + (5 * 4) + ((late - 10) * 6);
        }

        printf("Fine Rs. %d\n", fine);
    }

    return 0;
}