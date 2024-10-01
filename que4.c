
#include <stdio.h>

float calculateTriangleArea(float base, float height) {
    return (base * height) / 2;
}

int main() {
    float base, height, area;

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    area = calculateTriangleArea(base, height);

    printf("The area of the triangle is: %.2f\n", area);

    return 0;
