#include <stdio.h>

int main() {
    float weight;
    float totalCharge = 0.0;

    // 1. Get the weight as input from the user
    printf("Enter the weight of the parcel (in kg): ");
    scanf("%f", &weight);

    // 2. Calculate the charge based on the given slabs
    if (weight <= 0) {
        printf("Invalid weight. Please enter a positive value.\n");
    } else if (weight <= 10) {
        // Slab 1: Upto 10 kg (Rs 30/kg)
        totalCharge = weight * 30;
    } else if (weight <= 30) {
        // Slab 2: For the next 20 kg (Rs 20/kg)
        // Charge for the first 10 kg + charge for the remaining weight
        totalCharge = (10 * 30) + ((weight - 10) * 20);
    } else {
        // Slab 3: Above 30 kg (Rs 15/kg)
        // Charge for first 10 kg + charge for next 20 kg + charge for remaining
        totalCharge = (10 * 30) + (20 * 20) + ((weight - 30) * 15);
    }

    // 3. Print the final result
    if (weight > 0) {
        printf("\n----------------------------------\n");
        printf("Weight of parcel:   %.2f kg\n", weight);
        printf("Total transport charge: Rs. %.2f\n", totalCharge);
        printf("----------------------------------\n");
    }

    return 0;
}
