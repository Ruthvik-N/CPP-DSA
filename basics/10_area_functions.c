#include <stdio.h>

void sqArea(float side);
void CircleAr(float radius);
void RectangleAr(float l, float b);

void sqArea(float side) {
    printf("required area is: %f\n", side * side);
}

void CircleAr(float radius) {
    printf("required area is: %f\n", 3.14 * radius * radius);
}

void RectangleAr(float l, float b) {
    printf("required area is: %f\n", l * b);
}

int main() {
    float side, radius, l, b;
    printf("enter value of side, radius, l, b: ");
    scanf("%f %f %f %f", &side, &radius, &l, &b);
    sqArea(side);
    CircleAr(radius);
    RectangleAr(l, b);
    return 0;
}