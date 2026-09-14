// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%f", &side1);
    printf("Side 2: ");
    scanf("%f", &side2);
    printf("Side 3: ");
    scanf("%f", &side3);

    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Invalid input, Side lengths must be greater than zero.\n");
    }
    else if ((side1 + side2 <= side3) || (side1 + side3 <= side2) || (side2 + side3 <= side1)) {
        printf("Invalid triangle, The given sides cannot form a triangle.\n");
    }
    else if (side1 == side2 && side2 == side3) {
        printf("The triangle is Equilateral.\n");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("The triangle is Isosceles.\n");
    }
    else {
        printf("The triangle is Scalene.\n");
    }

    return 0;
}
