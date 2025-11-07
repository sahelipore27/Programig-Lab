#include <stdio.h>

int main() {
    int age;
    int choice;

    printf("Enter your age: ");
    scanf("%d", &age);

    // condition: 1 means eligible, 0 means not eligible
    choice = (age >= 18) ? 1 : 0;

    switch (choice) {
        case 1:
            printf("You are eligible to vote.\n");
            break;
        case 0:
            printf("You are not eligible to vote.\n");
            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
}
