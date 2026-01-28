#include<stdio.h>
int main()
{
    float radius, area, circumference;
    const float pi=3.1416;

    printf("Enter the value of Radius = ");
    scanf("%f", &radius);

    area= pi*radius*radius;
    circumference=2*pi*radius;

    printf("The area of a circle is= %.2f\n ", area);
    printf("The circumference of a circle is= %.2f", circumference);

    return 0;
}
