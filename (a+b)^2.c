#include<stdio.h>
int main()
{
    float a,b,square;
    printf("Enter the value of a : ");
    scanf("%f", &a);
    printf("Enter the value of b : ");
    scanf("%f", &b);

    square=a*a+2*a*b+b*b;
    printf("The result of (a+b)^2 = %f", square);

    return 0;

}
