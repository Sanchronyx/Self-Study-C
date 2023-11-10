#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool digit_seen[10] = {false};
    long n;
    int digit;
    int seen[10] = {0}; // Initialize the seen array with zeros

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
            seen[digit]++;
        } else {
            digit_seen[digit] = true;
        }
        n /= 10;
    }

    bool has_repeated_digit = false;
    for (int i = 0; i < 10; i++) {
        if (seen[i] > 1) {
            printf("Repeated Digit: %d (repeated %d times)\n", i, seen[i]);
            has_repeated_digit = true;
        }
    }
    if (!has_repeated_digit) {
        printf("No repeated digit\n");
    }

    return 0;
}
