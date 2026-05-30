#include "Pentagon.h"
#include <cmath>

Pentagon::Pentagon(float s, float m) {
    side = s;
    mass = m;
}

float Pentagon::area() {
    // Area of regular pentagon: (1/4) * sqrt(5 * (5 + 2 * sqrt(5))) * a^2
    return 0.25f * sqrt(5.0f * (5.0f + 2.0f * sqrt(5.0f))) * side * side;
}

float Pentagon::perimeter() {
    return 5.0f * side;
}

float Pentagon::areaDensity() {
    if (area() == 0) return 0;
    return mass / area();
}
