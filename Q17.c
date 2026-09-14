// Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;
    float realPart, imagPart;

    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    printf("Enter the value of c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("The coefficient 'a' cannot be zero.\n");
        return 1;
    }

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Category: Real and Distinct Roots\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }   
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);

        printf("Category: Real and Equal Roots\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }   
    else {
        printf("Category: Complex Roots\n");
    }

    return 0;
}