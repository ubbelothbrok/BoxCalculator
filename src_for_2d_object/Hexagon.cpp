#include "Hexagon.h"
#include <cmath>

Hexagon::Hexagon(float s, float m) {
    side = s;
    mass = m;
}

float Hexagon::area() {
    // Area of regular hexagon: (3 * sqrt(3) / 2) * a^2
    return 1.5f * std::sqrt(3.0f) * side * side;
}

float Hexagon::perimeter() {
    return 6.0f * side;
}

float Hexagon::areaDensity() {
    if (area() == 0) return 0;
    return mass / area();
}
