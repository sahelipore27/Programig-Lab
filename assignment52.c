#include <stdio.h>

int sumEven(int n) {
    if (n == 0)
        return 0;
    return (2 * n) + sumEven(n - 1);
}

int main() {
    printf("Sum of first 10 even natural numbers = %d\n", sumEven(10));
    return 0;
}
