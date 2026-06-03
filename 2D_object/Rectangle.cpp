#include "Rectangle.h"

Rectangle::Rectangle(float w, float h, float m) {
    width = w;
    height = h;
    mass = m;
}

float Rectangle::area() {
    return width * height;
}

float Rectangle::perimeter() {
    return 2.0f * (width + height);
}

float Rectangle::areaDensity() {
    if (area() == 0) return 0;
    return mass / area();
}
