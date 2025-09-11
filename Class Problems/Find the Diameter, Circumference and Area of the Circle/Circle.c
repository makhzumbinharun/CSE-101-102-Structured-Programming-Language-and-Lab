#include <stdio.h>
#define PI 3.1416 // Constant value of π
int main() {
float radius, diameter, circumference, area;
// Input radius from user
printf("Enter the radius of the circle: ");
scanf("%f", &radius);
// Calculations
diameter = 2 * radius;
circumference = 2 * PI * radius;
area = PI * radius * radius;
// Output results
printf("Diameter: %.2f\n", diameter);
printf("Circumference: %.2f\n", circumference);
printf("Area: %.2f\n", area);

return 0;
}
