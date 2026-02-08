#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d;
    float r1, r2;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and different.\n");
        printf("Root1 = %.2f\n", r1);
        printf("Root2 = %.2f\n", r2);
    }
    else if (d == 0) {
        r1 = -b / (2*a);
        printf("Roots are real and equal.\n");
        printf("Root = %.2f\n", r1);
    }
    else {
        printf("Roots are complex.\n");
        printf("Root1 = %.2f + %.2fi\n", -b/(2*a), sqrt(-d)/(2*a));
        printf("Root2 = %.2f - %.2fi\n", -b/(2*a), sqrt(-d)/(2*a));
    }

    return 0;
}
