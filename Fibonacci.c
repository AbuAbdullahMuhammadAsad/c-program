#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, next;

    printf("Enter value of N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input.\n");
    }
    else {
        printf("Fibonacci Series: ");

         for (i = 1; i <= n; i++) {
            printf("%d ", a);
            next = a + b;
            a = b;
            b = next;

        }
    }

    return 0;
}

