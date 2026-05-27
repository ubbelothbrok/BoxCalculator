#pragma once

class Box {
private:
    float length;
    float width;
    float height;
    float weight;

public:
    Box(float l, float w, float h, float wt);

    float calcArea() const;
    float calcVolume() const;
    float getWeight() const;
};
