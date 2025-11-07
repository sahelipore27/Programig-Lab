#include <stdio.h>

int main() {
    int rows;

    // Ask the user for the total number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("\nThe pattern is:\n");

    // Outer loop: Iterates for each row
    for (int i = 1; i <= rows; i++) {

        // 1. Loop to print leading spaces
        // Prints (rows - i) spaces
        for (int k = 1; k <= (rows - i); k++) {
            printf(" ");
        }

        // 2. Loop to print the ascending part of the number
        // Prints from 1 up to i
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3. Loop to print the descending part of the number
        // Prints from (i - 1) back down to 1
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Move to the next line after the row is complete
        printf("\n");
    }

    return 0;
}
