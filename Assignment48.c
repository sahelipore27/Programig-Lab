#include <stdio.h>

/**
 * @brief Fills and prints an n x n matrix in a spiral pattern.
 * @param n The size of the matrix (n x n).
 */
void printSpiral(int n) {
    // Check for invalid input
    if (n <= 0) {
        printf("Matrix size must be positive.\n");
        return;
    }

    // Variable Length Array (VLA) to hold the spiral
    int a[n][n];

    // Initialize the boundaries
    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = n - 1;

    // Counter for filling numbers
    int count = 1;

    // Loop until the boundaries cross
    while (top <= bottom && left <= right) {

        // 1. Fill the top row (from left to right)
        for (int i = left; i <= right; i++) {
            a[top][i] = count;
            count++;
        }
        top++; // Move the top boundary down

        // 2. Fill the right column (from top to bottom)
        for (int i = top; i <= bottom; i++) {
            a[i][right] = count;
            count++;
        }
        right--; // Move the right boundary left

        // 3. Fill the bottom row (from right to left)
        // Check if top boundary is still above bottom
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                a[bottom][i] = count;
                count++;
            }
            bottom--; // Move the bottom boundary up
        }

        // 4. Fill the left column (from bottom to top)
        // Check if left boundary is still before right
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                a[i][left] = count;
                count++;
            }
            left++; // Move the left boundary right
        }
    }

    // --- Printing the Matrix ---
    printf("\nThe %d x %d Spiral Pattern:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Use %-4d to print the number left-aligned in a 4-char-wide space
            // This makes the columns line up nicely
            printf("%-4d ", a[i][j]);
        }
        printf("\n"); // Newline at the end of each row
    }
}

// --- Main function to run the program ---
int main() {
    int n;

    printf("Enter the size of the matrix (n): ");
    scanf("%d", &n);

    printSpiral(n);

    return 0;
}
