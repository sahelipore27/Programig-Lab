#include <stdio.h>
#include <math.h> // Required for pow()

// Helper function to count the number of digits in a number
int countDigits(int n) {
    if (n == 0) return 1;
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is Narcissistic (Armstrong)
int isNarcissistic(int num) {
    if (num < 0) return 0; // Not defined for negative numbers

    int digits = countDigits(num);
    int temp = num;
    long long sum = 0; // Use long long to prevent overflow during sum calculation

    while (temp != 0) {
        int lastDigit = temp % 10;
        // Add the digit raised to the power of (total number of digits)
        sum += (long long)pow(lastDigit, digits);
        temp /= 10;
    }

    // If the sum of powered digits equals the original number, it is narcissistic
    return (sum == num);
}

// Function to check if a number is Automorphic
int isAutomorphic(int num) {
    if (num < 0) return 0; // Not defined for negative numbers

    // Use long long for the square to prevent overflow
    long long square = (long long)num * num;
    int tempNum = num;

    // Check if the digits of the square match the number from the end
    while (tempNum > 0) {
        // If the last digit of the number doesn't match the last digit of the square
        if (tempNum % 10 != square % 10) {
            return 0; // It's not automorphic
        }
        // Move to the next digit
        tempNum /= 10;
        square /= 10;
    }

    // If the loop finished without mismatch, all digits matched
    return 1;
}


// Main menu-driven function
int main() {
    int choice, num;

    do {
        // 1. Print the menu
        printf("\n--- MENU ---\n");
        printf("1. Check Narcissistic Number\n");
        printf("2. Check Automorphic Number\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        
        // 2. Get user's choice
        scanf("%d", &choice);

        // 3. Use a switch to act on the choice
        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isNarcissistic(num)) {
                    printf("Result: %d is a Narcissistic number.\n", num);
                } else {
                    printf("Result: %d is NOT a Narcissistic number.\n", num);
                }
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isAutomorphic(num)) {
                    printf("Result: %d is an Automorphic number.\n", num);
                } else {
                    printf("Result: %d is NOT an Automorphic number.\n", num);
                }
                break;

            case 3:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please enter 1, 2, or 3.\n");
        }
    } while (choice != 3); // 4. Repeat until the user chooses to exit

    return 0;
}
