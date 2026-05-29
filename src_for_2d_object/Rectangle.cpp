#include "Rectangle.h"

Rectangle::Rectangle(float w, float h, float m) 
    : width(w), height(h), mass(m) {}

float Rectangle::area() const {
    return width * height;
}

float Rectangle::perimeter() const {
    return 2.0f * (width + height);
}

float Rectangle::areaDensity() const {
    if (area() == 0) return 0;
    return mass / area();
}
