#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area, perimeter;

    // Input three sides of the triangle
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check if the sides form a valid triangle
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        perimeter = a + b + c;
        s = perimeter / 2;

        // Heron's formula for area
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("Perimeter = %.2f\n", perimeter);
        printf("Area = %.2f\n", area);

        // Check if area and perimeter are equal
        if (fabs(area - perimeter) < 0.001)
            printf("The triangle is an Equable Triangle.\n");
        else
            printf("The triangle is NOT an Equable Triangle.\n");
    } 
    else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
