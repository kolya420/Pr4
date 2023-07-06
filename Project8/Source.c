#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Function to count the number of equal divisors of a number
int countEqualDivisors(int n) {
    int count = 0;
    for (int m = 1; m <= n; m++) {
        if (n / m == n % m) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Call the countEqualDivisors function and store the result
    int result = countEqualDivisors(n);

    // Print the number of equal divisors
    printf("Number of equal divisors of a number %d: %d\n", n, result);

    return 0;
}
