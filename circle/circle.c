#include <stdio.h>

int main()
{
    double radius;
    double circomfernce;
    double area;
    const double PI;
    printf("enter radius of a circle: ");
    scanf("%lf", &radius);
    circomfernce = 2 * PI * radius;
    area = PI * radius * radius;
    printf("\ncircomference: %lf", circomfernce);
    printf("\n radius: %lf", radius);
    return 0;
}