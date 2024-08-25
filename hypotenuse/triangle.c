#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    double b;
    double c;
    printf("Enter side A: ");
    scanf("%lf", &a);
    printf("\nEnter side B: ");
    scanf("%lf", &b);
    c = sqrt(a * a + b * b);
    printf("\n The value of hypotenuse is : %.2lf", c);
    return 0;
}