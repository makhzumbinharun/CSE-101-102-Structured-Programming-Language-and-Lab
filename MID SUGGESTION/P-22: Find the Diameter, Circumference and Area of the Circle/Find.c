#include <stdio.h>
const float PI=3.1416;
int main() {
    float r, d, c, Area;
    
    printf("Enter the Radius: ");
    scanf("%f", &r);
    
    d=2*r;
    c=2*PI*r;
    Area=PI*r*r;
    
    printf("Diameter of the Circle: %.2lf\n", d);
    printf("Circumference of the Circle: %.2lf\n", c);
    printf("Area of the Circle: %.2lf\n", Area);
    
    return 0;
}
