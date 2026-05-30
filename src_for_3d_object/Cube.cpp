#include "Cube.h"

Cube::Cube(float s, float m) {
    side = s;
    mass = m;
}

float Cube::surfaceArea() {
    return 6.0f * side * side;
}

float Cube::volume() {
    return side * side * side;
}

float Cube::density() {
    if (volume() == 0) return 0;
    return mass / volume();
}
