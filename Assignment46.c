#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder, originalNum;

    // 1. Get the number from the user
    printf("Enter an integer to check for palindrome: ");
    scanf("%d", &num);

    // Store the original number in a separate variable
    originalNum = num;

    // Handle negative numbers: A negative number is not a palindrome.
    if (num < 0) {
        printf("\nResult: %d is NOT a palindrome.\n", originalNum);
    } else {
        // 2. Reverse the number
        // We use a temporary variable 'num' which will become 0
        while (num != 0) {
            remainder = num % 10; // Get the last digit
            
            // Build the reversed number
            reversedNum = reversedNum * 10 + remainder;
            
            num = num / 10;       // Remove the last digit
        }

        // 3. Compare the original number with the reversed number
        printf("\nOriginal number: %d\n", originalNum);
        printf("Reversed number: %d\n", reversedNum);

        if (originalNum == reversedNum) {
            printf("\nResult: %d is a palindrome.\n", originalNum);
        } else {
            printf("\nResult: %d is NOT a palindrome.\n", originalNum);
        }
    }

    return 0;
}
