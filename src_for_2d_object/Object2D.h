#pragma once

class Object2D {
private:
    float width;
    float height;
    float mass;

public:
    Object2D(float w, float h, float m);

    float area() const;
    float perimeter() const;
    float areaDensity() const; // mass per unit area
};
