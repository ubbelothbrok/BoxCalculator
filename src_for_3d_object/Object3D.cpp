#include "Object3D.h"

Object3D::Object3D(float w, float h, float d, float m) 
    : width(w), height(h), depth(d), mass(m) {}

float Object3D::surfaceArea() const {
    return 2.0f * ((width * height) + (height * depth) + (depth * width));
}

float Object3D::volume() const {
    return width * height * depth;
}

float Object3D::density() const {
    if (volume() == 0) return 0;
    return mass / volume();
}
