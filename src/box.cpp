#include "box.h"

Box::Box(float l, float w, float h, float wt) {
    length = l;
    width = w;
    height = h;
    weight = wt;
}

float Box::calcArea() {
    // Surface area of a rectangular prism: 2(lw + wh + hl)
    return 2.0f * ((length * width) + (width * height) + (height * length));
}

float Box::calcVolume() {
    // Volume: l * w * h
    return length * width * height;
}

float Box::getWeight() {
    return weight;
}
