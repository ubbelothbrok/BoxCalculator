#include "Cuboid.h"

Cuboid::Cuboid(float w, float h, float d, float m) {
    width = w;
    height = h;
    depth = d;
    mass = m;
}

float Cuboid::surfaceArea() {
    return 2.0f * ((width * height) + (height * depth) + (depth * width));
}

float Cuboid::volume() {
    return width * height * depth;
}

float Cuboid::density() {
    if (volume() == 0) return 0;
    return mass / volume();
}
