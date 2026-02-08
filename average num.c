#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    float avg;
    int num;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        sum = sum + num;
    }

    avg = (float)sum / n;

    printf("Average = %.2f\n", avg);

    return 0;
}
