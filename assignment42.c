#include <stdio.h>
#include <math.h> // We need this library for the ceil() function

// Define constants to make the code easy to read and modify
#define COOKIES_PER_BOX 24
#define BOXES_PER_CONTAINER 75

int main() {
    int totalCookies;
    int totalBoxes;
    int totalContainers;

    // 1. Prompt the user for the total number of cookies
    printf("Enter the total number of cookies: ");
    scanf("%d", &totalCookies);

    if (totalCookies < 0) {
        printf("Please enter a non-negative number.\n");
        return 1; // Exit if the input is invalid
    }

    // 2. Calculate the number of boxes
    // We use ceil() (ceiling) to round UP. 
    // For example, 25 cookies / 24 = 1.04, which ceil() rounds up to 2 boxes.
    totalBoxes = (int)ceil((double)totalCookies / COOKIES_PER_BOX);

    // 3. Calculate the number of containers
    // We use the same logic for boxes and containers.
    // 76 boxes / 75 = 1.01, which ceil() rounds up to 2 containers.
    totalContainers = (int)ceil((double)totalBoxes / BOXES_PER_CONTAINER);

    // 4. Output the results
    printf("\n--- Shipping Details ---\n");
    printf("Total Cookies:  %d\n", totalCookies);
    printf("Total Boxes needed:     %d\n", totalBoxes);
    printf("Total Containers needed: %d\n", totalContainers);

    return 0;
}
