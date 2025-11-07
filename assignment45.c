#include <stdio.h>

int main() {
    int num, smallest = 9;
    int tempNum, digit;

    // 1. Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Create a temporary copy to work with
    tempNum = num;

    // 2. Handle negative numbers
    // If the number is negative (e.g., -482), we want to check the digits 4, 8, and 2.
    // So, we use its positive (absolute) value.
    if (tempNum < 0) {
        tempNum = -tempNum;
    }

    // 3. Loop through the digits
    // We use a do-while loop to make sure the code runs at least ONCE.
    // This is important to correctly handle the input '0'.
    do {
        // Get the last digit using the modulo operator
        // 538 % 10 = 8
        digit = tempNum % 10;

        // Check if this digit is smaller than the current smallest
        if (digit < smallest) {
            smallest = digit;
        }

        // Remove the last digit using integer division
        // 538 / 10 = 53
        tempNum = tempNum / 10;

        // Optimization: If we find a 0, we can stop early
        // since no digit can be smaller.
        if (smallest == 0) {
            break;
        }

    } while (tempNum != 0); // Loop continues as long as there are digits left

    // 4. Print the final result
    printf("\nSmallest digit in %d is: %d\n", num, smallest);

    return 0;
}
