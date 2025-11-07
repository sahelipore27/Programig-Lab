#include <stdio.h>

int main() {
    int num, tensDigit, onesDigit;
    int sumOfDigits, productOfDigits, finalResult;

    // 1. Prompt the user to enter a two-digit number
    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    // 2. Add validation to ensure it's a two-digit number
    if (num < 10 || num > 99) {
        printf("Error: That is not a two-digit number (10-99).\n");
    } else {
        // 3. Separate the number into two digits
        // For a number like 59:
        tensDigit = num / 10; // 59 / 10 = 5 (integer division)
        onesDigit = num % 10; // 59 % 10 = 9 (remainder)

        // 4. Perform the calculations from the assignment
        sumOfDigits = tensDigit + onesDigit;     // 5 + 9 = 14
        productOfDigits = tensDigit * onesDigit; // 5 * 9 = 45
        finalResult = sumOfDigits + productOfDigits; // 14 + 45 = 59

        // 5. Compare the final result with the original input
        printf("\nCalculating for the number %d:\n", num);
        printf("Sum of digits (%d + %d)     = %d\n", tensDigit, onesDigit, sumOfDigits);
        printf("Product of digits (%d * %d) = %d\n", tensDigit, onesDigit, productOfDigits);
        printf("Total (Sum + Product)      = %d\n", finalResult);
        printf("\n----------------------------------\n");

        if (finalResult == num) {
            printf("Result: %d is a Special 2-digit number.\n", num);
        } else {
            printf("Result: %d is Not a special two digit number.\n", num);
        }
    }

    return 0;
}
