#include <stdio.h>

int main() {
    // Define the number of rows for the pattern
    int rows = 4;
    
    // Initialize the starting character
    char ch = 'A';

    // Outer loop: Iterates for each row
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop 1: Prints the leading spaces
        // Prints (rows - i) spaces to create the pyramid shape
        for (int k = 1; k <= (rows - i); k++) {
            printf(" "); // Print a single space for padding
        }

        // Inner loop 2: Prints the characters
        // Prints 'i' characters for the current row
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch); // Print the character followed by a space
            ch++;              // Move to the next character
        }

        // Move to the next line after the row is complete
        printf("\n");
    }

    return 0;
}
