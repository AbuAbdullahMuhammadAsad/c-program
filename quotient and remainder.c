
#include <stdio.h>

int main() {
    int x, y;
    int quotient, remainder;

    printf("Enter two numbers (x and y): ");
    scanf("%d %d", &x, &y);

    quotient=x/y;
    remainder=x%y;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}
