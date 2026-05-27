#pragma once

class Box {
private:
    float length;
    float width;
    float height;
    float weight;

public:
    // Constructor taking length, width, height, and weight
    Box(float l, float w, float h, float wt);

    // Calculates the surface area of the box
    float calcArea();

    // Calculates the volume of the box
    float calcVolume();

    // Returns the weight of the box
    float getWeight();
};
