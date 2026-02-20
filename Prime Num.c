#include <stdio.h>

int main() {
    int n, i, j;
    int count = 0, isPrime;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        isPrime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            count++;
        }
    }

    printf("Total prime numbers from 2 to %d = %d\n", n, count);

    return 0;
}
