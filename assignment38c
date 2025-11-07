#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if all numbers are unequal
    if (a == b || b == c || a == c) {
        printf("Numbers are not unequal (some are equal).\n");
    } else {
        // Find the greatest number
        if (a > b && a > c)
            printf("Greatest number is: %d\n", a);
        else if (b > a && b > c)
            printf("Greatest number is: %d\n", b);
        else
            printf("Greatest number is: %d\n", c);
    }

    // Check whether all are +ve, -ve, or mixed
    if (a > 0 && b > 0 && c > 0)
        printf("All numbers are positive.\n");
    else if (a < 0 && b < 0 && c < 0)
        printf("All numbers are negative.\n");
    else
        printf("Numbers are mixed (positive and negative both present).\n");

    return 0;
}
