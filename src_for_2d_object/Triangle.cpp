#include "Triangle.h"

Triangle::Triangle(float b, float h, float m) {
    base = b;
    height = h;
    mass = m;
}

float Triangle::area() {
    return 0.5f * base * height;
}

float Triangle::perimeter() {
    //for equilateral triangle
    return 3.0f * base;
}

float Triangle::areaDensity() {
    if (area() == 0) return 0;
    return mass / area();
}
