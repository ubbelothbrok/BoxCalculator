#include "Object2D.h"

Object2D::Object2D(float w, float h, float m) 
    : width(w), height(h), mass(m) {}

float Object2D::area() const {
    return width * height;
}

float Object2D::perimeter() const {
    return 2.0f * (width + height);
}

float Object2D::areaDensity() const {
    if (area() == 0) return 0;
    return mass / area();
}
