#include <stdio.h>

int main() {
    int choice, num, i;
    int isComposite = 0; // Use a flag: 0 = No, 1 = Yes

    do {
        // 1. Print the menu
        printf("\n--- MENU ---\n");
        printf("1. Check if a number is composite\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // 2. Use the switch statement to handle the choice
        switch (choice) {
            case 1:
                // 3. Get the number from the user
                printf("Enter a number: ");
                scanf("%d", &num);

                // 4. Logic to check for a composite number
                
                // Reset the flag for each new check
                isComposite = 0; 
                
                // Numbers 0, 1, and negative numbers are NOT composite.
                // We only check numbers greater than 1.
                if (num <= 1) {
                    isComposite = 0; 
                } else {
                    // Check for divisors from 2 up to half of the number
                    for (i = 2; i <= num / 2; i++) {
                        // If a divisor is found, the number is composite
                        if (num % i == 0) {
                            isComposite = 1; // Set flag to Yes
                            break;           // Exit the loop, no need to check further
                        }
                    }
                }

                // 5. Display the result
                if (isComposite == 1) {
                    printf("Result: %d is a composite number.\n", num);
                } else {
                    printf("Result: %d is NOT a composite number.\n", num);
                }
                break; // End of case 1

            case 2:
                printf("Exiting program. Goodbye!\n");
                break; // End of case 2

            default:
                printf("Invalid choice. Please enter 1 or 2.\n");
        }
    } while (choice != 2); // 6. Repeat the loop until the user chooses 2

    return 0;
}
