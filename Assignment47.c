#include <stdio.h>

int main() {
    int n, rev = 0, d;

    // 1. Get the number from the user
    printf("Enter an integer: ");
    scanf("%d", &n);

    // 2. Store the original number to print it later
    int originalNum = n;

    // 3. Loop to reverse the digits
    while (n != 0) {
        // Get the last digit (remainder)
        d = n % 10;
        
        // Build the reversed number
        rev = rev * 10 + d;
        
        // Remove the last digit from the original number
        n = n / 10;
    }

    // 4. Print the result
    printf("\nOriginal number: %d\n", originalNum);
    printf("Reversed number: %d\n", rev);

    return 0;
}
