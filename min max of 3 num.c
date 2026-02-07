#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("Maximum = %d\n", a);
        if (b <= c)
            printf("Minimum = %d\n", b);
        else
            printf("Minimum = %d\n", c);
    }
    else if (b >= a && b >= c) {
        printf("Maximum = %d\n", b);
        if (a <= c)
            printf("Minimum = %d\n", a);
        else
            printf("Minimum = %d\n", c);
    }
    else {
        printf("Maximum = %d\n", c);
        if (a <= b)
            printf("Minimum = %d\n", a);
        else
            printf("Minimum = %d\n", b);
    }

    return 0;
}
