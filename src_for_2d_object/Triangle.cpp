#include "Triangle.h"

Triangle::Triangle(float b, float h, float m) 
    : base(b), height(h), mass(m) {}

float Triangle::area() const {
    return 0.5f * base * height;
}

float Triangle::perimeter() const {
    // Assuming equilateral for simplicity if only base is given
    return 3.0f * base;
}

float Triangle::areaDensity() const {
    if (area() == 0) return 0;
    return mass / area();
}
