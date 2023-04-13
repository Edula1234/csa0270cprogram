#include <stdio.h>
float calculatediameter(float radius) {
    return 2 * radius;
}
float calculatecircumference(float radius) {
    return 2 * 3.14159 * radius;
}
float calculateArea(float radius) {
    return 3.14159 * radius * radius;
}
int main() {
    float radius, diameter, circumference, Area;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    diameter = calculatediameter(radius);
    circumference = calculatecircumference(radius);
    Area = calculateArea(radius);
    printf("diameter = %.2f units\n",diameter);
    printf("circumference = %.2f units\n", circumference);
    printf("Area = %.2f sq.units\n", Area);
    return 0;
}
