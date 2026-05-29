#include "Hexagon.h"
#include <cmath>

Hexagon::Hexagon(float s, float m) 
    : side(s), mass(m) {}

float Hexagon::area() const {
    // Area of regular hexagon: (3 * sqrt(3) / 2) * a^2
    return 1.5f * std::sqrt(3.0f) * side * side;
}

float Hexagon::perimeter() const {
    return 6.0f * side;
}

float Hexagon::areaDensity() const {
    if (area() == 0) return 0;
    return mass / area();
}
