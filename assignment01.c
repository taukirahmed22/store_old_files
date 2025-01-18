#include <stdio.h>
#include <math.h>
#define pi 3.1416
int main()
{
    double r, perimeter, Area;
    printf("Enter the value of radius: ");
    scanf("%lf", &r);

    perimeter = 2*pi*r;
    printf("Perimeter of the circle = %lf\n", perimeter);

    Area = pi*r*r;
    printf("Area of the circle = %lf\n", Area);

    return 0;

}
