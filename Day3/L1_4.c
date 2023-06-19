#include <stdio.h>

void findSmallestAndLargestDigits(int n, int numbers[]) {
    int smallestDigit = 9;  // Initialize with largest possible digit
    int largestDigit = 0;   // Initialize with smallest possible digit
    int i;

    for (i = 0; i < n; i++) {
        int num = numbers[i];

        // Check if the current number is valid (positive and non-zero)
        if (num <= 0) {
            printf("Not Valid\n");
            return;
        }

        while (num > 0) {
            int digit = num % 10;

            if (digit < smallestDigit) {
                smallestDigit = digit;
            }

            if (digit > largestDigit) {
                largestDigit = digit;
            }

            num /= 10;
        }
    }

    printf("%d and %d\n", smallestDigit, largestDigit);
}

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    findSmallestAndLargestDigits(n, numbers);

    return 0;
}


