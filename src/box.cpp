#include "box.h"

Box::Box(float l, float w, float h, float wt) 
    : length(l), width(w), height(h), weight(wt) {}

float Box::calcArea() const {
    return 2.0f * ((length * width) + (width * height) + (height * length));
}

float Box::calcVolume() const {
    return length * width * height;
}

float Box::getWeight() const {
    return weight;
}
